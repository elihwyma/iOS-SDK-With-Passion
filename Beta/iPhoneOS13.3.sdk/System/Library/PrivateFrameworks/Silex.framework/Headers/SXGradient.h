/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface SXGradient : NSObject

{
    NSArray *_colors;
    NSArray *_locations;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
}

@property (nonatomic, readonly) struct CGPoint startPoint;
@property (nonatomic, readonly) struct CGPoint endPoint;
@property (nonatomic, readonly) NSArray *colors;
@property (nonatomic, readonly) NSArray *locations;

- (id)initWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 colors:(id)arg3 locations:(id)arg4;

@end
