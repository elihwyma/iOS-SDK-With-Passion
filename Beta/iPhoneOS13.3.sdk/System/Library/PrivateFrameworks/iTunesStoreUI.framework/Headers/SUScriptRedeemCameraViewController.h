/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SURedeemCameraViewController, WebScriptObject;

@interface SUScriptRedeemCameraViewController : SUScriptObject

{
    NSString *_backButtonTitle;
    WebScriptObject *_codeHandler;
    SURedeemCameraViewController *_redeemCameraViewController;
}

@property (weak, nonatomic) SURedeemCameraViewController *redeemCameraViewController;
@property (retain, nonatomic) NSString *backButtonTitle;
@property (retain, nonatomic) WebScriptObject *codeHandler;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)_className;
- (void)dismiss;
- (void)present;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (void)_performAction:(long long)arg1 withObject:(id)arg2;
- (void)codeDetected:(id)arg1;
- (void)pauseCamera;
- (void)recognitionError;
- (void)recognitionSuccess;
- (void)resumeCamera;

@end
