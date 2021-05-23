/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSWPListLabelGeometry : NSObject

{
    double mScale;
    double mBaselineOffset;
    _Bool mScaleWithText;
}

@property (nonatomic) double scale;
@property (nonatomic) double baselineOffset;
@property (nonatomic) _Bool scaleWithText;

+ (id)listLabelGeometry;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithScale:(double)arg1 scaleWithText:(_Bool)arg2 baselineOffset:(double)arg3;

@end
