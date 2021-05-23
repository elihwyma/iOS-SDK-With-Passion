/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface JTEffectsPreviewGeneratorJob : NSObject

{
    NSArray *_outputNodes;
    NSArray *_callbackKeys;
}

@property (nonatomic, readonly) NSArray *outputNodes;
@property (nonatomic, readonly) NSArray *callbackKeys;

- (id)init;
- (id)initWithRenderOutputs:(id)arg1 callbackKeys:(id)arg2;

@end
