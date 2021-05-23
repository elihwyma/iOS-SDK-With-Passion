/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UIDictationStreamingOperations : NSObject

{
    double _timeAfterInsertion;
    double _timeAfterSelectRange;
    id <UITextInput> _document;
    NSMutableArray *_operations;
}

@property (retain, nonatomic) NSMutableArray *operations;

- (id)init;
- (void)dealloc;
- (_Bool)isEmpty;
- (void)popAndInvoke;
- (_Bool)hasOperations;
- (id)pop;
- (void)pushSpeechOperation:(id)arg1;
- (void)clearOperations;
- (void)setDocument:(id)arg1;
- (void)performSelectRangeForSpeech:(id)arg1;
- (void)pushSpeechOperationWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)_performReplaceSelectedText:(id)arg1;
- (double)delayAfterSelector:(SEL)arg1;
- (void)dictationWillBeginInDocument:(id)arg1;
- (void)pushSelectRangeForSpeech:(struct _NSRange)arg1;
- (void)pushInsertTextForSpeech:(id)arg1;
- (void)pushReplaceSelectionWithText:(id)arg1;
- (void)willEndEditingInInputDelegate:(id)arg1;
- (_Bool)isNotEmpty;
- (unsigned long long)selectionChangeDelta;

@end
