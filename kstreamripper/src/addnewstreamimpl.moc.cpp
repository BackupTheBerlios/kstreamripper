/****************************************************************************
** AddNewStreamImpl meta object code from reading C++ file 'addnewstreamimpl.h'
**
** Created: Mon Oct 6 00:42:34 2003
**      by: The Qt MOC ($Id: addnewstreamimpl.moc.cpp,v 1.1 2003/10/07 08:47:20 tuxipuxi Exp $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "addnewstreamimpl.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *AddNewStreamImpl::className() const
{
    return "AddNewStreamImpl";
}

QMetaObject *AddNewStreamImpl::metaObj = 0;
static QMetaObjectCleanUp cleanUp_AddNewStreamImpl( "AddNewStreamImpl", &AddNewStreamImpl::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString AddNewStreamImpl::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "AddNewStreamImpl", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString AddNewStreamImpl::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "AddNewStreamImpl", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* AddNewStreamImpl::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = AddNewStream::staticMetaObject();
    static const QUMethod slot_0 = {"okButtonClicked", 0, 0 };
    static const QUMethod slot_1 = {"cancelButtonClicked", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "okButtonClicked()", &slot_0, QMetaData::Protected },
	{ "cancelButtonClicked()", &slot_1, QMetaData::Protected }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_ptr, "AddNewStreamImpl", QUParameter::In }
    };
    static const QUMethod signal_0 = {"finished", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "finished(AddNewStreamImpl*)", &signal_0, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"AddNewStreamImpl", parentObject,
	slot_tbl, 2,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_AddNewStreamImpl.setMetaObject( metaObj );
    return metaObj;
}

void* AddNewStreamImpl::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "AddNewStreamImpl" ) )
	return this;
    return AddNewStream::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL finished
void AddNewStreamImpl::finished( AddNewStreamImpl* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

bool AddNewStreamImpl::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: okButtonClicked(); break;
    case 1: cancelButtonClicked(); break;
    default:
	return AddNewStream::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool AddNewStreamImpl::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: finished((AddNewStreamImpl*)static_QUType_ptr.get(_o+1)); break;
    default:
	return AddNewStream::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool AddNewStreamImpl::qt_property( int id, int f, QVariant* v)
{
    return AddNewStream::qt_property( id, f, v);
}

bool AddNewStreamImpl::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
