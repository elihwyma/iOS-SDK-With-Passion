/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBScreenTimeTestRecipe : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)load;
+ (void)_setApplicationBundleIdentifiers:(id)arg1 blockedForScreenTimeExpiration:(_Bool)arg2;

- (id)title;
- (void)handleVolumeIncrease;
- (void)handleVolumeDecrease;
- (id)_defaultIdentifiers;

@end
