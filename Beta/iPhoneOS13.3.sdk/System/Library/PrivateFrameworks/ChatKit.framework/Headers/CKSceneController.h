/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CKSceneController : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)_suppressionContextsForChatIdentifier:(id)arg1 personCentricID:(id)arg2;
- (id)_starkManagerSharedInstance;
- (id)messagesSceneDelegate;

@end
