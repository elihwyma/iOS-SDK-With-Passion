/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <Espresso/ETTask.h>

@class NSArray;

@interface ETTaskClassifier : ETTask

{
    NSArray *_class_names;
}

@property NSArray *class_names;

- (id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 extractor:(id)arg3;
- (id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 extractor:(id)arg3 needWeightsInitialization:(_Bool)arg4;

@end
