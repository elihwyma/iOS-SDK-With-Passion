/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class TSUColor;

@interface TSTTableBadge : NSObject

{
    int _badgeType;
    TSUColor *_color;
    double _viewScale;
    struct CGRect _frame;
}

@property (nonatomic) int badgeType;
@property (retain, nonatomic) TSUColor *color;
@property (nonatomic) double viewScale;
@property (nonatomic) struct CGRect frame;

+ (id)badgeWithType:(int)arg1 color:(id)arg2 viewScale:(double)arg3 frame:(struct CGRect)arg4;

- (void)dealloc;
- (void)drawInContext:(struct CGContext *)arg1;

@end
