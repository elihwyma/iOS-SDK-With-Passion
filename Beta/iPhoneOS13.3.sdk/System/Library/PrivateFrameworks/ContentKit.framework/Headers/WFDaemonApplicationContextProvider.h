/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WFDaemonApplicationContextProvider : NSObject

{
    NSString *_userInterfaceType;
}

@property (nonatomic, readonly) NSString *userInterfaceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool wfIdleTimerDisabled;

- (id)init;
- (_Bool)shouldReverseLayoutDirection;
- (long long)currentApplicationStateForWFApplicationContext:(id)arg1;
- (id)bundleForWFApplicationContext:(id)arg1;
- (id)currentUserInterfaceTypeForWFApplicationContext:(id)arg1;
- (id)notificationNameForApplicationStateEvent:(long long)arg1 applicationContext:(id)arg2;
- (id)keyWindowForWFApplicationContext:(id)arg1;
- (id)applicationForWFApplicationContext:(id)arg1;
- (id)initWithUserInterfaceType:(id)arg1;

@end
