/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFSetDiff.h>

@interface HFMutableSetDiff : HFSetDiff

{
    _Bool _hasChanges;
}

@property (nonatomic, readonly) _Bool hasChanges;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)addObject:(id)arg1;
- (void)deleteObject:(id)arg1;
- (void)updateObject:(id)arg1;
- (void)deleteAllObjects;
- (id)initWithFromSet:(id)arg1;
- (void)_updateHasChanges;

@end
