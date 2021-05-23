/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/TILanguageModelOfflineLearningHandle.h>

@interface TILanguageModelOfflineLearningHandleFavonius : TILanguageModelOfflineLearningHandle

{
    RefPtr_9bddf3b2 _dictionaries;
    shared_ptr_e9f752ce _currentModel;
}

@property (nonatomic) shared_ptr_e9f752ce currentModel;
@property (nonatomic, readonly) RefPtr_9bddf3b2 dictionaries;

- (void)load;
- (id).cxx_construct;
- (id)initWithInputMode:(id)arg1;
- (void)didFinishLearning;
- (void)updateAdaptationContext:(id)arg1;
- (void)adaptToParagraph:(id)arg1 timeStamp:(double)arg2 adaptationType:(int)arg3;

@end
