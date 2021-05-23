/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUHistogram.h>

@interface NUMutableHistogram : NUHistogram

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)write:(CDUnknownBlockType)arg1;
- (void)increment:(long long)arg1;
- (void)observeValue:(double)arg1;
- (void)observeValuesInDataSet:(id)arg1;

@end
