/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol PUTilingCoordinateSystem;

__attribute__((visibility("hidden")))
@interface PUTilingLayoutCoordinateSystem : NSObject

{
    id <PUTilingCoordinateSystem> _parentCoordinateSystem;
    struct CGPoint _coordinateSystemOrigin;
}

@property (weak, nonatomic) id <PUTilingCoordinateSystem> parentCoordinateSystem;
@property (nonatomic) struct CGPoint coordinateSystemOrigin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
