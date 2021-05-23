/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class IDSIDQueryController;

@interface CNUIIDSIDQueryControllerWrapper : NSObject

{
    IDSIDQueryController *_controller;
}

@property (nonatomic, readonly) IDSIDQueryController *controller;

- (_Bool)refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)initWithController:(id)arg1;

@end
