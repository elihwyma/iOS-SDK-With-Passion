/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKJSObject.h>

@class NSString;

@protocol IKAppKeyboardBridge;

@interface IKJSKeyboard : IKJSObject

{
    id <IKAppKeyboardBridge> _appBridge;
}

@property (retain, nonatomic) id <IKAppKeyboardBridge> appBridge;
@property (copy, nonatomic) NSString *text;

- (void)jsTextDidChange;

@end
