/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <SoundAnalysis/SNVGGBasedDetector.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SNSoundDetector : SNVGGBasedDetector

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) shared_ptr_f6ac7592 graph;
@property (nonatomic, readonly) struct Box *resultsBox;

+ (id)modelForSoundIdentifier:(id)arg1;

- (id)initWithVGGishBasedMLModel:(id)arg1 soundIdentifier:(id)arg2;
- (id)initWithSoundIdentifier:(id)arg1;

@end
