/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_xpc_object;

@interface IDSXPCConnectionWrapper : NSObject

{
    NSObject<OS_xpc_object> *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (void)resume;
- (id)initWithConnection:(id)arg1;

@end
