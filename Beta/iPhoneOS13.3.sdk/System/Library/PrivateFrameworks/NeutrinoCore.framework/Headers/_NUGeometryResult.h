/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/_NURenderResult.h>

@class NSString, NUImageGeometry;

@protocol NURenderStatistics;

@interface _NUGeometryResult : _NURenderResult

{
    NUImageGeometry *_geometry;
}

@property (retain) NUImageGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) id <NURenderStatistics> statistics;

@end
