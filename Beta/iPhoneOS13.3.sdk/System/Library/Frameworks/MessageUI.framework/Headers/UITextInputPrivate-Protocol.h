/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <MessageUI/Swift-Protocol.h>

@class RTIInputSystemSourceSession, UITextInteractionAssistant;

@protocol UITextInputSuggestionDelegate;

@protocol UITextInputPrivate <Swift>

@property (nonatomic, readonly) UITextInteractionAssistant *interactionAssistant;
@property (nonatomic) long long selectionGranularity;
@property (nonatomic, readonly) id <UITextInputSuggestionDelegate> textInputSuggestionDelegate;
@property (nonatomic) long long _textInputSource;
@property (nonatomic, readonly) RTIInputSystemSourceSession *_rtiSourceSession;
@property (nonatomic, readonly) _Bool supportsImagePaste;

- (unsigned short)textInputTraits;
- (unsigned short)selectionRange;
- (unsigned short)hasContent;
- (unsigned short)selectAll;
- (unsigned short)hasSelection;

@end
