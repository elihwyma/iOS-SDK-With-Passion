/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIResponder, UIView;

@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface _UITextServiceSessionContext : NSObject <Swift>

{
    UIResponder<UITextInput> *_textInput;
    UIView *_view;
    NSString *_textWithContext;
    struct _NSRange _selectedRange;
    struct CGRect _presentationRect;
}

@property (nonatomic, readonly) UIResponder<UITextInput> *textInput;
@property (retain, nonatomic) UIView *view;
@property (copy, nonatomic, readonly) NSString *textWithContext;
@property (nonatomic, readonly) struct _NSRange selectedRange;
@property (nonatomic, readonly) struct CGRect presentationRect;

+ (_Bool)supportsSecureCoding;
+ (id)sessionContextWithText:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
+ (id)sessionContextForType:(long long)arg1 withTextInput:(id)arg2;
+ (id)sessionContextWithText:(id)arg1 withRect:(struct CGRect)arg2 withRange:(struct _NSRange)arg3 withView:(id)arg4;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initForType:(long long)arg1 withText:(id)arg2 withTextInput:(id)arg3 withView:(id)arg4;
- (_Bool)_typeRequiresContext:(long long)arg1;
- (void)_gatherAdditionalContext;
- (void)convertRectToView:(id)arg1;

@end
