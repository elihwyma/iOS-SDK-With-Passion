/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@protocol UICoordinateSpace;

@interface PUDisplayLocationProvider : NSObject

{
    id <UICoordinateSpace> __coordinateSpace;
    struct CGPoint __point;
}

@property (nonatomic, readonly) struct CGPoint _point;
@property (nonatomic, readonly) id <UICoordinateSpace> _coordinateSpace;

- (id)init;
- (struct CGPoint)locationInView:(id)arg1;
- (id)initWithPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;

@end
