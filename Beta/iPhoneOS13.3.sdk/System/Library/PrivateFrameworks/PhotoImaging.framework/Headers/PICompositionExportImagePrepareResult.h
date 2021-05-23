/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <Foundation/NSObject.h>

@class NUImageExportRequest;

@interface PICompositionExportImagePrepareResult : NSObject

{
    NUImageExportRequest *_request;
    CDStruct_d58201db _inputSize;
}

@property (retain) NUImageExportRequest *request;
@property CDStruct_912cb5d2 inputSize;

@end
