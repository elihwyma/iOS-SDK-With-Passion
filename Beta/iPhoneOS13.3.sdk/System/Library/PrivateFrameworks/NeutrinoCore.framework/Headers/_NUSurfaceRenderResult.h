/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/_NUImageRenderResult.h>

@class NSString, NUImageGeometry, NURegion;

@protocol NURenderStatistics, NUSurfaceImage;

@interface _NUSurfaceRenderResult : _NUImageRenderResult

{
    id <NUSurfaceImage> _image;
}

@property (retain) id <NUSurfaceImage> image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) id <NURenderStatistics> statistics;
@property (readonly) NURegion *region;
@property (readonly) NUImageGeometry *geometry;

@end
