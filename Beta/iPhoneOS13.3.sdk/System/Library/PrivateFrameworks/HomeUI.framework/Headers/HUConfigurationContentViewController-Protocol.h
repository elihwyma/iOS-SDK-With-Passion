/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/Swift-Protocol.h>

@protocol HUConfigurationContentViewControllerDelegate;

@protocol HUConfigurationContentViewController <Swift>

@property (nonatomic, readonly) _Bool canFinishConfiguration;
@property (weak, nonatomic) id <HUConfigurationContentViewControllerDelegate> delegate;

@end
