/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcRecurrenceTypeEnum.h"

// TYPE IfcRecurrenceTypeEnum = ENUMERATION OF	(DAILY	,WEEKLY	,MONTHLY_BY_DAY_OF_MONTH	,MONTHLY_BY_POSITION	,BY_DAY_COUNT	,BY_WEEKDAY_COUNT	,YEARLY_BY_DAY_OF_MONTH	,YEARLY_BY_POSITION);
IfcRecurrenceTypeEnum::IfcRecurrenceTypeEnum() {}
IfcRecurrenceTypeEnum::~IfcRecurrenceTypeEnum() {}
shared_ptr<IfcPPObject> IfcRecurrenceTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcRecurrenceTypeEnum> copy_self( new IfcRecurrenceTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcRecurrenceTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCRECURRENCETYPEENUM("; }
	if( m_enum == ENUM_DAILY )
	{
		stream << ".DAILY.";
	}
	else if( m_enum == ENUM_WEEKLY )
	{
		stream << ".WEEKLY.";
	}
	else if( m_enum == ENUM_MONTHLY_BY_DAY_OF_MONTH )
	{
		stream << ".MONTHLY_BY_DAY_OF_MONTH.";
	}
	else if( m_enum == ENUM_MONTHLY_BY_POSITION )
	{
		stream << ".MONTHLY_BY_POSITION.";
	}
	else if( m_enum == ENUM_BY_DAY_COUNT )
	{
		stream << ".BY_DAY_COUNT.";
	}
	else if( m_enum == ENUM_BY_WEEKDAY_COUNT )
	{
		stream << ".BY_WEEKDAY_COUNT.";
	}
	else if( m_enum == ENUM_YEARLY_BY_DAY_OF_MONTH )
	{
		stream << ".YEARLY_BY_DAY_OF_MONTH.";
	}
	else if( m_enum == ENUM_YEARLY_BY_POSITION )
	{
		stream << ".YEARLY_BY_POSITION.";
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcRecurrenceTypeEnum> IfcRecurrenceTypeEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcRecurrenceTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcRecurrenceTypeEnum>(); }
	shared_ptr<IfcRecurrenceTypeEnum> type_object( new IfcRecurrenceTypeEnum() );
	if( boost::iequals( arg, L".DAILY." ) )
	{
		type_object->m_enum = IfcRecurrenceTypeEnum::ENUM_DAILY;
	}
	else if( boost::iequals( arg, L".WEEKLY." ) )
	{
		type_object->m_enum = IfcRecurrenceTypeEnum::ENUM_WEEKLY;
	}
	else if( boost::iequals( arg, L".MONTHLY_BY_DAY_OF_MONTH." ) )
	{
		type_object->m_enum = IfcRecurrenceTypeEnum::ENUM_MONTHLY_BY_DAY_OF_MONTH;
	}
	else if( boost::iequals( arg, L".MONTHLY_BY_POSITION." ) )
	{
		type_object->m_enum = IfcRecurrenceTypeEnum::ENUM_MONTHLY_BY_POSITION;
	}
	else if( boost::iequals( arg, L".BY_DAY_COUNT." ) )
	{
		type_object->m_enum = IfcRecurrenceTypeEnum::ENUM_BY_DAY_COUNT;
	}
	else if( boost::iequals( arg, L".BY_WEEKDAY_COUNT." ) )
	{
		type_object->m_enum = IfcRecurrenceTypeEnum::ENUM_BY_WEEKDAY_COUNT;
	}
	else if( boost::iequals( arg, L".YEARLY_BY_DAY_OF_MONTH." ) )
	{
		type_object->m_enum = IfcRecurrenceTypeEnum::ENUM_YEARLY_BY_DAY_OF_MONTH;
	}
	else if( boost::iequals( arg, L".YEARLY_BY_POSITION." ) )
	{
		type_object->m_enum = IfcRecurrenceTypeEnum::ENUM_YEARLY_BY_POSITION;
	}
	return type_object;
}