/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBBiometricMonitorTestRecipeDummyDataSource, SBBiometricMonitorUI;

@interface SBBiometricMonitorTestRecipe : NSObject

{
    SBBiometricMonitorUI *_monitorUI;
    SBBiometricMonitorTestRecipeDummyDataSource *_dataSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)load;

- (id)title;
- (void)handleVolumeIncrease;
- (void)handleVolumeDecrease;

@end
