/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol MTLLibrary;

@interface AVTCompositorPipelineCache : NSObject

{
    id <MTLLibrary> _library;
    NSMutableDictionary *_pipelines;
}

+ (id)pipelineForPropertyName:(id)arg1 device:(id)arg2;

- (id)initWithDevice:(id)arg1;
- (id)pipelineForPropertyName:(id)arg1;

@end
