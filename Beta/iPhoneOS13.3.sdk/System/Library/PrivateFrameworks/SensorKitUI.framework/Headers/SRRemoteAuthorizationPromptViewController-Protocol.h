/*
 Image: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI
 */

#import <SensorKitUI/Swift-Protocol.h>

@protocol SRRemoteAuthorizationPromptViewControllerDelegate;

@protocol SRRemoteAuthorizationPromptViewController <Swift>

@property (weak, nonatomic) id <SRRemoteAuthorizationPromptViewControllerDelegate> delegate;

- (unsigned short)invalidate;

@end
