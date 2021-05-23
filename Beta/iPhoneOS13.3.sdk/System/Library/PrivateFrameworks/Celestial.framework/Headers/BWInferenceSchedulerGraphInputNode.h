/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

#import <Celestial/Swift-Protocol.h>

@class NSSet, NSString;

@protocol BWInferenceExecutable, BWInferenceExtractable, BWInferencePropagatable, BWInferenceSubmittable;

@interface BWInferenceSchedulerGraphInputNode : NSObject <Swift>

{
    NSSet *_videoPropagatedToStorage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <BWInferenceExecutable> executable;
@property (nonatomic, readonly) id <BWInferenceSubmittable> submittable;
@property (nonatomic, readonly) id <BWInferenceExtractable> extractable;
@property (nonatomic, readonly) id <BWInferencePropagatable> propagatable;

+ (void)initialize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)prepare;
- (id)newStorage;
- (int)extractFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 usingVideoRequirements:(id)arg2 metadataRequirements:(id)arg3 toStorage:(id)arg4;
- (int)extractFromStorage:(id)arg1 usingVideoRequirements:(id)arg2 metadataRequirements:(id)arg3 toSampleBuffer:(struct opaqueCMSampleBuffer *)arg4;
- (id)initWithVideoPropagatedToStorage:(id)arg1;

@end
