/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <Foundation/NSObject.h>

@class NUImageGeometry;

@interface PICompositionExportResult : NSObject

{
    NUImageGeometry *_geometry;
    CDStruct_d58201db _inputSize;
}

@property (retain) NUImageGeometry *geometry;
@property CDStruct_912cb5d2 inputSize;

@end
