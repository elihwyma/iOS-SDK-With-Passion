/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/_NURenderResult.h>

@class NSString;

@protocol NUAuxiliaryImage, NURenderStatistics;

@interface _NUAuxiliaryImageRenderResult : _NURenderResult

{
    id <NUAuxiliaryImage> _auxiliaryImage;
}

@property (retain) id <NUAuxiliaryImage> auxiliaryImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) id <NURenderStatistics> statistics;

@end
