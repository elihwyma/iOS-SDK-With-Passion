/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class ISDialog;

@protocol SUScriptModalDialogDelegate;

@interface SUScriptModalDialog : NSObject

{
    ISDialog *_dialog;
    id <SUScriptModalDialogDelegate> _delegate;
}

@property (nonatomic) id <SUScriptModalDialogDelegate> delegate;

+ (id)titleForURL:(id)arg1;

- (void)dealloc;
- (id)initWithDialog:(id)arg1;
- (id)copyResponseByRunningModal;
- (id)_copyResponseByRunningModal;

@end
