/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBApplication, UIView;

@protocol SBLoginAppSceneHosterDelegate;

@protocol SBLoginAppSceneHoster <Swift>

@property (weak, nonatomic) id <SBLoginAppSceneHosterDelegate> delegate;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) NSString *hostedAppBundleID;
@property (nonatomic, readonly) NSString *hostedSceneIdentifier;
@property (nonatomic, readonly) SBApplication *hostedApp;
@property (nonatomic) _Bool deferHIDEvents;

- (unsigned short)updateSettingsWithTransitionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)launchLoginAppWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)killLoginApp;

@end
