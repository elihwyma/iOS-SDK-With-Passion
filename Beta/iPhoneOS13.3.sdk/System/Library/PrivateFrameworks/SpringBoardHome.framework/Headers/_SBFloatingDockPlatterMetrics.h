/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@interface _SBFloatingDockPlatterMetrics : NSObject

{
    double _continuousCornerRadius;
    double _shadowRadius;
    double _shadowYOffset;
    struct CGRect _bounds;
}

@property (nonatomic, readonly) struct CGRect bounds;
@property (nonatomic, readonly) double continuousCornerRadius;
@property (nonatomic, readonly) double shadowRadius;
@property (nonatomic, readonly) double shadowYOffset;

- (id)initWithBounds:(struct CGRect)arg1 continuousCornerRadius:(double)arg2 shadowRadius:(double)arg3 shadowYOffset:(double)arg4;

@end
