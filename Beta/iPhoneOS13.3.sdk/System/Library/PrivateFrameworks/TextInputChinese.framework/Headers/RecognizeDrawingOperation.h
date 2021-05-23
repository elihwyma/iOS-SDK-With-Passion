/*
 Image: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
 */

#import <Foundation/NSOperation.h>

@class CHRecognizer, NSArray, NSLocale, NSString, TIHandwritingStrokes, TIInputManagerHandwriting;

@interface RecognizeDrawingOperation : NSOperation

{
    TIHandwritingStrokes *_strokes;
    NSLocale *_recognitionLanguage;
    NSArray *_candidates;
    NSString *_history;
    TIInputManagerHandwriting *_im;
    CHRecognizer *_recognizer;
}

@property (retain, nonatomic) NSArray *candidates;
@property (retain, nonatomic) TIInputManagerHandwriting *manager;
@property (retain, nonatomic) NSString *history;
@property (retain, nonatomic) CHRecognizer *recognizer;

+ (id)recognitionResultsForStrokes:(id)arg1 withRecognizer:(id)arg2 history:(id)arg3 shouldCancel:(CDUnknownBlockType)arg4;

- (void)dealloc;
- (void)main;
- (id)initWithInputManager:(id)arg1 strokes:(id)arg2 history:(id)arg3;

@end
