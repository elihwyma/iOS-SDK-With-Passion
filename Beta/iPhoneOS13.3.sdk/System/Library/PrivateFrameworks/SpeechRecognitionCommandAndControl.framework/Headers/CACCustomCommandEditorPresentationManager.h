/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <SpeechRecognitionCommandAndControl/CACOutOfProcessPresentationManager.h>

@interface CACCustomCommandEditorPresentationManager : CACOutOfProcessPresentationManager

+ (long long)remoteViewType;
+ (int)axNotification;

- (void)_showCustomCommandEditorWithContextKey:(id)arg1 contextValue:(id)arg2;
- (_Bool)showCustomCommandEditorWithGesture:(id)arg1;
- (_Bool)showCustomCommandEditorWithTextToInsert:(id)arg1;
- (_Bool)showCustomCommandEditorWithRecordedUserActionFlow:(id)arg1;
- (_Bool)showCustomCommandEditorWithShortcutsWorkflow:(id)arg1;
- (void)handleAXNotificationData:(void *)arg1;

@end
