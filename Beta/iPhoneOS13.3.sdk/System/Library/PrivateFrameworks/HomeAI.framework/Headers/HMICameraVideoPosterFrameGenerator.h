/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <HMFoundation/HMFObject.h>

@class HMICameraVideoPosterFrameGeneratorInput, NSArray, NSMutableArray, NSString;

@interface HMICameraVideoPosterFrameGenerator : HMFObject

{
    NSArray *_posterFrames;
    NSMutableArray *_posterFramesInternal;
    HMICameraVideoPosterFrameGeneratorInput *_input;
    CDStruct_1b6d18a9 _nextGenerationTime;
}

@property (retain) NSMutableArray *posterFramesInternal;
@property (readonly) HMICameraVideoPosterFrameGeneratorInput *input;
@property (readonly) NSArray *posterFrames;
@property CDStruct_1b6d18a9 nextGenerationTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithInput:(id)arg1;
- (void)startHandlingFrames;
- (_Bool)willHandleFramesFromVideoResource:(id)arg1;
- (_Bool)handleVideoFrame:(id)arg1 error:(id *)arg2;
- (_Bool)saveAsPosterFrame:(id)arg1 error:(id *)arg2;

@end
