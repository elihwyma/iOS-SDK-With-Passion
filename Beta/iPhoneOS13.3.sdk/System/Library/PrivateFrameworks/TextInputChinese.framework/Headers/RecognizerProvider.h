/*
 Image: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
 */

#import <Foundation/NSObject.h>

@class CHRecognizer, NSLocale;

@interface RecognizerProvider : NSObject

{
    CHRecognizer *_recognizer;
    NSLocale *_recognitionLanguage;
    CDUnknownBlockType _recognizerDidLoadBlock;
}

@property (readonly) NSLocale *recognitionLanguage;
@property (readonly) CHRecognizer *recognizer;
@property (copy) CDUnknownBlockType recognizerDidLoadBlock;

- (void)dealloc;
- (id)initWithRecognitionLanguage:(id)arg1;
- (void)provideRecognizerToBlock:(CDUnknownBlockType)arg1;
- (void)unloadRecognizer;

@end
