/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSMutableArray, NSString;

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface BWPipelineStage : NSObject

{
    NSObject<OS_dispatch_queue> *_executionQueue;
    NSObject<OS_dispatch_group> *_executionGroup;
    NSMutableArray *_queuedMessages;
    NSMutableArray *_inputsForQueuedMessages;
    NSString *_name;
    unsigned int _priority;
    _Bool _stillImagePipelineStage;
    NSString *_stillImagePipelineStageEntryNodeName;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned int priority;
@property (nonatomic, readonly) _Bool stillImagePipelineStage;
@property (nonatomic, readonly) NSString *stillImagePipelineStageEntryNodeName;

+ (void)initialize;
+ (id)pipelineStageWithName:(id)arg1 priority:(unsigned int)arg2;
+ (id)pipelineStageWithName:(id)arg1 priority:(unsigned int)arg2 discardsLateSampleData:(_Bool)arg3;
+ (id)pipelineStageForStillImagesWithName:(id)arg1 priority:(unsigned int)arg2;
+ (id)pipelineStageForStillImagesWithName:(id)arg1 entryNodeName:(id)arg2 priority:(unsigned int)arg3;
+ (id)_currentPipelineStage;
+ (void)_setCurrentPipelineStage:(id)arg1;

- (void)dealloc;
- (id)description;
- (void)sendMessage:(id)arg1 toInput:(id)arg2;
- (id)_initWithName:(id)arg1 priority:(unsigned int)arg2 discardsLateSampleData:(_Bool)arg3;
- (id)_initStillImagePipelineStageWithName:(id)arg1 entryNodeName:(id)arg2 priority:(unsigned int)arg3;
- (_Bool)_isCurrentPipelineStage;
- (void)_serviceQueuedMessages;

@end
