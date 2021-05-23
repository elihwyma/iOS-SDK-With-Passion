/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSObject.h>

#import <CoreUI/Swift-Protocol.h>

@interface CUIPSDGradientStop : NSObject <Swift>

{
    double location;
}

+ (void)initialize;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)location;
- (void)setLocation:(double)arg1;
- (id)initWithLocation:(double)arg1;
- (_Bool)isColorStop;
- (_Bool)isOpacityStop;
- (_Bool)isDoubleStop;

@end
