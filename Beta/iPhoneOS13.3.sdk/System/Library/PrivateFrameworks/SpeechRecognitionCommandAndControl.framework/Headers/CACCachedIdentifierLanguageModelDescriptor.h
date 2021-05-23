/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@class CACLanguageModel;

@interface CACCachedIdentifierLanguageModelDescriptor : NSObject

{
    struct __RXLanguageObject *_rxLanguageObject;
    _Bool _isCurrent;
    CACLanguageModel *_languageModel;
}

@property (retain) CACLanguageModel *languageModel;
@property _Bool isCurrent;

- (void)dealloc;
- (struct __RXLanguageObject *)rxLanguageObject;
- (void)setRxLanguageObject:(struct __RXLanguageObject *)arg1;

@end
