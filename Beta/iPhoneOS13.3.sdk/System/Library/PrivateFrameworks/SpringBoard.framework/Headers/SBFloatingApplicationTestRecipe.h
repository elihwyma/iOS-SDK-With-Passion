/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBFloatingApplicationTestRecipe : NSObject

{
    unsigned long long _mode;
    _Bool _addSide;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)load;

- (id)init;
- (id)title;
- (void)_perform;
- (void)handleVolumeIncrease;
- (void)handleVolumeDecrease;

@end
