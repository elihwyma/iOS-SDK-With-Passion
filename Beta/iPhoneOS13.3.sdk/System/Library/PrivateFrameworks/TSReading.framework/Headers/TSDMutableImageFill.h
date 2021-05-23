/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDImageFill.h>

@class TSPData, TSUColor;

@interface TSDMutableImageFill : TSDImageFill

@property (retain, nonatomic) TSPData *imageData;
@property (nonatomic) _Bool interpretsUntaggedImageDataAsGeneric;
@property (nonatomic) int technique;
@property (copy, nonatomic) TSUColor *tintColor;
@property (nonatomic) struct CGSize fillSize;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setScale:(double)arg1;

@end
