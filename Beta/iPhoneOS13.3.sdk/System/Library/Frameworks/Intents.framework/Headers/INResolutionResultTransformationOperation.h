/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSOperation.h>

@class INIntent, INIntentSlotDescription;

@protocol INIntentParameterOptionsProviding, INIntentResolutionResultDataProviding;

__attribute__((visibility("hidden")))
@interface INResolutionResultTransformationOperation : NSOperation

{
    _Bool _finished;
    _Bool _executing;
    id <INIntentResolutionResultDataProviding> _result;
    INIntent *_intent;
    INIntentSlotDescription *_intentSlotDescription;
    id <INIntentParameterOptionsProviding> _optionsProvider;
    CDUnknownBlockType _returnBlock;
}

@property (nonatomic, readonly) id <INIntentResolutionResultDataProviding> result;
@property (nonatomic, readonly) INIntent *intent;
@property (nonatomic, readonly) INIntentSlotDescription *intentSlotDescription;
@property (nonatomic, readonly) id <INIntentParameterOptionsProviding> optionsProvider;
@property (copy, nonatomic) CDUnknownBlockType returnBlock;

- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (id)initWithResult:(id)arg1 intent:(id)arg2 intentSlotDescription:(id)arg3 optionsProvider:(id)arg4;

@end
