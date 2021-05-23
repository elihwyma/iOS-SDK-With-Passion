/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <WebKit/Swift-Protocol.h>

@class NSArray, NSObject, NSString, UIView;

@protocol NSSecureCoding, _WKFocusedElementInfo;

@protocol _WKFormInputSession <Swift>

@property (nonatomic, readonly, getter=isValid) _Bool valid;
@property (nonatomic, readonly) NSObject<NSSecureCoding> *userObject;
@property (nonatomic, readonly) id <_WKFocusedElementInfo> focusedElementInfo;
@property (copy, nonatomic) NSString *accessoryViewCustomButtonTitle;
@property (retain, nonatomic) UIView *customInputView;
@property (retain, nonatomic) UIView *customInputAccessoryView;
@property (copy, nonatomic) NSArray *suggestions;
@property (nonatomic) _Bool accessoryViewShouldNotShow;
@property (nonatomic) _Bool forceSecureTextEntry;
@property (nonatomic, readonly) _Bool requiresStrongPasswordAssistance;

- (unsigned short)reloadFocusedElementContextView;

@end
