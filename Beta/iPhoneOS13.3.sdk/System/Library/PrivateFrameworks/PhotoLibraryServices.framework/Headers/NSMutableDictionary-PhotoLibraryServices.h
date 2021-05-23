/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (PhotoLibraryServices)

- (void)_pl_setNonNilObject:(id)arg1 forKey:(id)arg2;
- (void)pl_enforceCorrectValuesForMinKey:(id)arg1 maxKey:(id)arg2;
- (void)pl_applyOrientation:(long long)arg1 toNormalizedPointWithXKey:(id)arg2 yKey:(id)arg3;

@end
