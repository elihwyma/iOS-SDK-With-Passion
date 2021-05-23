/*
 Image: /System/Library/PrivateFrameworks/iMessageApps.framework/iMessageApps
 */

#import <Foundation/NSObject.h>

@interface IMADropTarget : NSObject

{
    double _scale;
    double _meshScaleFactor;
    double _rotation;
    struct CGPoint _screenCoordinate;
    struct CGSize _initialSize;
}

@property (nonatomic, readonly) struct CGPoint screenCoordinate;
@property (nonatomic, readonly) struct CGSize initialSize;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) double meshScaleFactor;
@property (nonatomic, readonly) double rotation;

- (id)description;
- (id)initWithScreenCoordinate:(struct CGPoint)arg1 initialSize:(struct CGSize)arg2 scale:(double)arg3 meshScaleFactor:(double)arg4 rotation:(double)arg5;

@end
