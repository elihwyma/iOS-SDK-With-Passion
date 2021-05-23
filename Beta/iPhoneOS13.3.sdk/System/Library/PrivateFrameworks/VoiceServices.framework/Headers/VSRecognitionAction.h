/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, NSString, VSRecognitionSession;

@interface VSRecognitionAction : NSObject

{
    NSString *_resultString;
    NSString *_statusString;
    union {
        NSString *stringValue;
        NSAttributedString *attributedStringValue;
    } _spokenString;
    VSRecognitionSession *_session;
    unsigned int _spokenStringIsAttributed:1;
}

- (void)dealloc;
- (id)cancel;
- (id)_session;
- (id)perform;
- (int)completionType;
- (void)_continueAfterDeferredStart;
- (_Bool)_hasDeferredStartCallback;
- (void)_setSession:(id)arg1;
- (id)spokenFeedbackString;
- (id)spokenFeedbackAttributedString;
- (id)resultDisplayString;
- (id)statusDisplayString;
- (_Bool)sensitiveActionsEnabled;
- (void)setResultDisplayString:(id)arg1;
- (void)setStatusDisplayString:(id)arg1;
- (void)setSpokenFeedbackString:(id)arg1;
- (void)setSpokenFeedbackAttributedString:(id)arg1;
- (void)completeWithNextAction:(id)arg1 error:(id)arg2;

@end
