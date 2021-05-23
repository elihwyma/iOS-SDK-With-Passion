/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@protocol _UITextFieldVisualStyleSubject;

__attribute__((visibility("hidden")))
@interface _UITextFieldVisualStyle : NSObject

{
    id <_UITextFieldVisualStyleSubject> _styleSubject;
}

@property (weak, nonatomic) id <_UITextFieldVisualStyleSubject> styleSubject;

+ (id)inferredVisualStyleWithStyleSubject:(id)arg1;

- (id)defaultTextColor;
- (id)defaultTextColorForKeyboardAppearance;
- (id)parentViewForTextContentView;
- (id)placeholderColor;
- (id)namesOfAttributesToOverrideForEditing;
- (id)overridingEditingAttributes:(id)arg1 forOriginalAttributes:(id)arg2;
- (id)defaultFocusedTextColor;
- (id)initWithStyleSubject:(id)arg1;
- (_Bool)textShouldUseVibrancy;
- (void)handleTextVibrancy;

@end
