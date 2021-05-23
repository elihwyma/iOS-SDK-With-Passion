/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWNodeInput, BWNodeMessage, BWNodeOutput, BWPipelineStage, NSString;

@interface BWNodeConnection : NSObject

{
    BWNodeInput *_input;
    BWNodeOutput *_output;
    BWPipelineStage *_pipelineStage;
    _Bool _stillImagePipelineStageInputHandlesMessages;
    struct os_unfair_lock_s _suspensionLock;
    _Bool _suspended;
    _Bool _resumedByClient;
    _Bool _resumedForEventsOnly;
    BWNodeMessage *_configLiveMessageToPropagate;
}

@property (readonly) BWNodeInput *input;
@property (readonly) BWNodeOutput *output;
@property (readonly) BWPipelineStage *pipelineStage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)_requirementsArrayStartingFromInput:(id)arg1 forAttachedMediaKey:(id)arg2 finalAttachedMediaKeyOut:(id *)arg3;
+ (id)_inputAndRequirementsDebugArrayStartingFromInput:(id)arg1 forAttachedMediaKey:(id)arg2 finalAttachedMediaKeyOut:(id *)arg3;

- (void)dealloc;
- (void)suspend;
- (id)_inputDescription;
- (id)_outputDescription;
- (_Bool)detach;
- (_Bool)attach;
- (void)consumeMessage:(id)arg1 fromOutput:(id)arg2;
- (_Bool)_resolveCommonVideoBufferFormatForAttachedMediaKey:(id)arg1;
- (id)initWithOutput:(id)arg1 input:(id)arg2 pipelineStage:(id)arg3;
- (_Bool)resolveCommonBufferFormat;
- (void)resumeForEventsOnly:(_Bool)arg1;
- (id)_connectionDescription;

@end
