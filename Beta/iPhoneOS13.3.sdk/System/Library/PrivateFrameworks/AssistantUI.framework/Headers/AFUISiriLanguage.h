/*
 Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol AFUISiriLanguageDelegate;

@interface AFUISiriLanguage : NSObject

{
    _Bool _setupAssistantHasCompletedInitialRunChecked;
    _Bool _setupAssistantHasCompletedInitialRunAvailable;
    NSString *_spokenLanguageCode;
    id <AFUISiriLanguageDelegate> _delegate;
}

@property (weak, nonatomic, readonly, getter=_delegate) id <AFUISiriLanguageDelegate> delegate;
@property (copy, nonatomic, setter=_setSpokenLanguageCode:) NSString *spokenLanguageCode;
@property (nonatomic) _Bool setupAssistantHasCompletedInitialRunChecked;
@property (nonatomic, getter=_setupAssistantHasCompletedInitialRunAvailable) _Bool setupAssistantHasCompletedInitialRunAvailable;

- (id)init;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)_currentLocaleDidChange:(id)arg1;
- (id)_computeSpokenLanguageCode;
- (void)_spokenLanguageDidChange:(id)arg1;
- (void)_updateSpokenLanguageCode;

@end
