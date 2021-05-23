/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class FBApplicationUpdateScenesTransaction, NSString;

@interface SBMedusaAppsTestRecipe : NSObject

{
    _Bool _activated;
    NSString *_leftTestBundleID;
    NSString *_rightTestBundleID;
    FBApplicationUpdateScenesTransaction *_currentTransaction;
}

@property (retain, nonatomic) FBApplicationUpdateScenesTransaction *currentTransaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)load;

- (id)init;
- (id)title;
- (void)_toggle;
- (void)handleVolumeIncrease;
- (void)handleVolumeDecrease;
- (void)_updateAppsToBringUpFromPreferences;

@end
