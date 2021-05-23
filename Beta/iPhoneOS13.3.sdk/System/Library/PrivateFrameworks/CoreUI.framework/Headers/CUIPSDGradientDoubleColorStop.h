/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUIPSDGradientColorStop.h>

@interface CUIPSDGradientDoubleColorStop : CUIPSDGradientColorStop

{
    struct _psdGradientColor leadOutColor;
}

+ (void)initialize;
+ (id)doubleColorStopWithLocation:(double)arg1 leadInColor:(struct _psdGradientColor)arg2 leadOutColor:(struct _psdGradientColor)arg3;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct _psdGradientColor)leadOutColor;
- (_Bool)isDoubleStop;
- (id)initWithLocation:(double)arg1 leadInColor:(struct _psdGradientColor)arg2 leadOutColor:(struct _psdGradientColor)arg3;
- (struct _psdGradientColor)leadInColor;

@end
