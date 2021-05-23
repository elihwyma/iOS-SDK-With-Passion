/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSString, Protocol;

@interface CNXPCListenerDelegate : NSObject

{
    id _exportedObject;
    Protocol *_exportedInterfaceProtocol;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithWithExportedObject:(id)arg1 exportedInterfaceProtocol:(id)arg2;

@end
