/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSString, PUTilingView;

@protocol PUTilingCoordinateSystem;

__attribute__((visibility("hidden")))
@interface PUTilingViewCoordinateSystem : NSObject

{
    PUTilingView *_tilingView;
}

@property (weak, nonatomic, readonly) PUTilingView *tilingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) id <PUTilingCoordinateSystem> parentCoordinateSystem;
@property (nonatomic, readonly) struct CGPoint coordinateSystemOrigin;

- (id)init;
- (id)initWithTilingView:(id)arg1;

@end
