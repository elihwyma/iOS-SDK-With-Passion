/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@protocol UICoordinateSpace;

@interface PXCoordinatedRect : NSObject <Swift>

{
    NSObject<UICoordinateSpace> *_coordinateSpace;
    struct CGRect _rect;
}

@property (nonatomic, readonly) struct CGRect rect;
@property (nonatomic, readonly) NSObject<UICoordinateSpace> *coordinateSpace;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRect:(struct CGRect)arg1 inCoordinateSpace:(id)arg2;
- (struct CGRect)rectInCoordinateSpace:(id)arg1;

@end
