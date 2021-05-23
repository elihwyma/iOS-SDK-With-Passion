/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UITextView, _UIDefinitionValue;

__attribute__((visibility("hidden")))
@interface _UIShortDefinitionView : UIView

{
    _UIDefinitionValue *_definitionValue;
    UITextView *_definitionTextView;
}

@property (retain, nonatomic) _UIDefinitionValue *definitionValue;

- (id)initWithFrame:(struct CGRect)arg1;

@end
