/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSDate, TIInputMode, TILanguageModelAdaptationContext;

@interface TILanguageModelOfflineLearningHandle : NSObject

{
    _Bool _valid;
    TIInputMode *_inputMode;
    NSDate *_lastAdaptationDate;
    TILanguageModelAdaptationContext *_currentAdaptationContext;
}

@property (nonatomic, readonly) TIInputMode *inputMode;
@property (copy, nonatomic) NSDate *lastAdaptationDate;
@property (copy, nonatomic) TILanguageModelAdaptationContext *currentAdaptationContext;
@property (nonatomic, getter=isValid) _Bool valid;

- (void)load;
- (id)initWithInputMode:(id)arg1;
- (void)didFinishLearning;
- (void)updateAdaptationContext:(id)arg1;
- (void)adaptToParagraph:(id)arg1 timeStamp:(double)arg2 adaptationType:(int)arg3;

@end
