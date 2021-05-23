/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <Foundation/NSObject.h>

@class BBAction, BBBulletin, BBObserver, NSString;

@interface NCBulletinActionRunner : NSObject

{
    _Bool _shouldForwardAction;
    _Bool _responseWasSent;
    BBAction *_action;
    BBBulletin *_bulletin;
    BBObserver *_observer;
}

@property (nonatomic, readonly) BBAction *action;
@property (nonatomic, readonly) BBBulletin *bulletin;
@property (nonatomic, readonly) BBObserver *observer;
@property (nonatomic) _Bool responseWasSent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool shouldForwardAction;

- (void)executeAction:(id)arg1 fromOrigin:(id)arg2 endpoint:(id)arg3 withParameters:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithAction:(id)arg1 bulletin:(id)arg2 observer:(id)arg3;

@end
