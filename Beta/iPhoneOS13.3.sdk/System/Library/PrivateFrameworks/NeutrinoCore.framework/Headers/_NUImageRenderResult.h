/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/_NURenderResult.h>

#import <NeutrinoCore/Swift-Protocol.h>

@class NSString, NUImageGeometry, NURegion;

@protocol NURenderStatistics;

@interface _NUImageRenderResult : _NURenderResult <Swift>

{
    NURegion *_region;
    NUImageGeometry *_geometry;
}

@property (retain) NURegion *region;
@property (retain) NUImageGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) id <NURenderStatistics> statistics;

@end
