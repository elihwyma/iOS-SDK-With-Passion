/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSString;

@interface SBStatusBarStyleOverridesAssertionTestRecipe : NSObject

{
    NSMapTable *_assertionsByApp;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)load;

- (id)init;
- (id)title;
- (void)handleVolumeIncrease;
- (void)handleVolumeDecrease;

@end
