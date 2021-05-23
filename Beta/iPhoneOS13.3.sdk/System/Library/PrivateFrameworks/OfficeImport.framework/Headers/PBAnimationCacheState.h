/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/PDAnimationCacheState.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface PBAnimationCacheState : PDAnimationCacheState

{
    NSMutableSet *mEntranceDrawables;
    NSMutableSet *mExitDrawables;
}

- (id)init;
- (_Bool)isValid:(id)arg1;

@end
