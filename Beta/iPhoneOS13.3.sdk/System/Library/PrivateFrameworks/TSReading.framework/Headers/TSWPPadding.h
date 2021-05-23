/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSWPPadding : NSObject

{
    double _topInset;
    double _leftInset;
    double _bottomInset;
    double _rightInset;
}

@property (nonatomic) double topInset;
@property (nonatomic) double leftInset;
@property (nonatomic) double bottomInset;
@property (nonatomic) double rightInset;

+ (id)padding;
+ (id)paddingWithTopInset:(double)arg1 leftInset:(double)arg2 bottomInset:(double)arg3 rightInset:(double)arg4;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)transform:(struct CGAffineTransform)arg1;
- (id)initWithTopInset:(double)arg1 leftInset:(double)arg2 bottomInset:(double)arg3 rightInset:(double)arg4;

@end
