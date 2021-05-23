/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class VUIStoreAcquisitionProperties;

__attribute__((visibility("hidden")))
@interface VUIAcquisitionRequest : NSObject

{
    _Bool _cancelled;
    VUIStoreAcquisitionProperties *_properties;
    CDUnknownBlockType _completionBlock;
}

@property (copy, nonatomic) VUIStoreAcquisitionProperties *properties;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (getter=isCancelled) _Bool cancelled;

@end
