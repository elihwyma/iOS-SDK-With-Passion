/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/_NURenderResult.h>

@class NSArray, NSString;

@protocol NURenderStatistics;

@interface _NUFaceDetectionResult : _NURenderResult

{
    NSArray *_faces;
    CDStruct_d58201db _imageSize;
}

@property (retain) NSArray *faces;
@property CDStruct_912cb5d2 imageSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) id <NURenderStatistics> statistics;

@end
