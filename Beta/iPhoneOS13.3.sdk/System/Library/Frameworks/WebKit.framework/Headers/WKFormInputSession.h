/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIView;

@protocol NSSecureCoding, _WKFocusedElementInfo;

__attribute__((visibility("hidden")))
@interface WKFormInputSession : NSObject

{
    struct WeakObjCPtr<WKContentView> _contentView;
    struct RetainPtr<WKFocusedElementInfo> _focusedElementInfo;
    struct RetainPtr<UIView> _customInputView;
    struct RetainPtr<UIView> _customInputAccessoryView;
    struct RetainPtr<NSArray<UITextSuggestion *>> _suggestions;
    _Bool _accessoryViewShouldNotShow;
    _Bool _forceSecureTextEntry;
    _Bool _requiresStrongPasswordAssistance;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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

- (void)invalidate;
- (void)endEditing;
- (id).cxx_construct;
- (void)reloadFocusedElementContextView;
- (id)initWithContentView:(id)arg1 focusedElementInfo:(id)arg2 requiresStrongPasswordAssistance:(_Bool)arg3;

@end
