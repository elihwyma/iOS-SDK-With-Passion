/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AKFollowUpFactoryImpl : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_clearAction;
- (id)_itemFromPayload:(id)arg1 withAltDSID:(id)arg2;
- (id)_actionsFromPayload:(id)arg1;
- (id)_notificationFromPayload:(id)arg1;
- (id)_actionFromInfo:(id)arg1;
- (id)actionWithTitle:(id)arg1 andActionKey:(id)arg2;
- (id)itemsForAltDSID:(id)arg1 fromIDMSPayload:(id)arg2;
- (id)itemIdentifiersRequiringNotificationClearFromPayload:(id)arg1;
- (_Bool)IsFollowUpItemNotificationForced:(id)arg1;

@end
