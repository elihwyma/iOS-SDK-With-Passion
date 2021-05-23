/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSLock, NSMutableArray;

@interface SUGradient : NSObject

{
    NSMutableArray *_colorStops;
    NSLock *_lock;
    struct SUGradientPoint _p0;
    struct SUGradientPoint _p1;
    _Bool _sorted;
    long long _type;
}

@property (readonly) long long gradientType;
@property (readonly) struct SUGradientPoint p0;
@property (readonly) struct SUGradientPoint p1;
@property (readonly) NSArray *colorStopColors;
@property (readonly) NSArray *colorStopOffsets;
@property (readonly) long long numberOfColorStops;

+ (_Bool)supportsSecureCoding;
+ (id)gradientWithColor:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertyList:(id)arg1;
- (id)initWithType:(long long)arg1;
- (void)addColorStopWithOffset:(double)arg1 color:(struct CGColor *)arg2;
- (struct CGShading *)copyShading;
- (id)initWithPoint0:(struct SUGradientPoint)arg1 point1:(struct SUGradientPoint)arg2 type:(long long)arg3;
- (id)newPatternColorWithSize:(struct CGSize)arg1 opaque:(_Bool)arg2;
- (struct CGGradient *)copyCGGradient;

@end
