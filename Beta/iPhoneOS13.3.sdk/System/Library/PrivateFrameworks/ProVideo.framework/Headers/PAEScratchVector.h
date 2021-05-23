/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface PAEScratchVector : NSObject

{
    float _x;
    float _y;
    float _endX;
    float _endY;
}

- (id)initWithStartLocationX:(float)arg1 andY:(float)arg2 andEndLocationX:(float)arg3 andY:(float)arg4;
- (void)startLocationX:(float *)arg1 andY:(float *)arg2 andEndLocationX:(float *)arg3 andY:(float *)arg4;

@end
