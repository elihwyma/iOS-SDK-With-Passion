/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <WebKit/WKWebView.h>

@class NoteHTMLEditorView;

@interface NoteWKWebView : WKWebView

{
    NoteHTMLEditorView *_noteHTMLEditorView;
}

@property (weak, nonatomic) NoteHTMLEditorView *noteHTMLEditorView;

- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)paste:(id)arg1;
- (void)select:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)_showTextStyleOptions:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)strikethrough:(id)arg1;
- (void)calloutOptionInvoked:(long long)arg1 sender:(id)arg2;
- (void)ic_evaluateJavaScript:(id)arg1;
- (id)ic_evaluateJavaScriptAndWait:(id)arg1 error:(id *)arg2;

@end
