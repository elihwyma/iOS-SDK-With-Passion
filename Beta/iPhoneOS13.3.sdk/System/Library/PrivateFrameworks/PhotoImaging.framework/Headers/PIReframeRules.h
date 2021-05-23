/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <NeutrinoCore/NURuleSystem.h>

@interface PIReframeRules : NURuleSystem

@property (readonly) _Bool isCandidateForReframe;
@property (readonly) _Bool isCandidateForPerspective;
@property (readonly) _Bool isCandidateForHorizon;

+ (id)factCandidateForHorizon;
+ (id)factCandidateForPerspective;
+ (id)factCandidateForReframe;
+ (id)factCandidateForStill;
+ (id)factCandidateForVideo;
+ (id)sharedPregateRules;
+ (id)pregateRulesSystemWithConstants:(id)arg1;

@end
