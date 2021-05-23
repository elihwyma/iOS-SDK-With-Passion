/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <TSUtility/TSUProgress.h>

@class TSUBasicProgressStorage;

@interface TSUBasicProgress : TSUProgress

{
    TSUBasicProgressStorage *mStorage;
}

@property double value;
@property (getter=isIndeterminate) _Bool indeterminate;

- (id)init;
- (void)dealloc;
- (double)maxValue;
- (id)initWithMaxValue:(double)arg1;

@end
