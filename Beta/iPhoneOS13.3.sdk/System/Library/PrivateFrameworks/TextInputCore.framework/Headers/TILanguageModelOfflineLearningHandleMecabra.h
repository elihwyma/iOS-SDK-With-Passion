/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/TILanguageModelOfflineLearningHandle.h>

@class TIWordSearch;

@interface TILanguageModelOfflineLearningHandleMecabra : TILanguageModelOfflineLearningHandle

{
    TIWordSearch *_wordSearch;
}

@property (retain, nonatomic) TIWordSearch *wordSearch;

- (void)load;
- (void)didFinishLearning;
- (void)updateAdaptationContext:(id)arg1;
- (void)adaptToParagraph:(id)arg1 timeStamp:(double)arg2 adaptationType:(int)arg3;

@end
