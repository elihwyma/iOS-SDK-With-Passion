/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNPhotoPickerActionsViewControllerLayout : NSObject

{
    long long _buttonCount;
    struct CGSize _containerSize;
    struct UIEdgeInsets _edgeInsets;
}

@property (nonatomic, readonly) struct CGSize containerSize;
@property (nonatomic, readonly) struct UIEdgeInsets edgeInsets;
@property (nonatomic, readonly) long long buttonCount;
@property (nonatomic, readonly) struct CGRect actionButtonsViewFrame;
@property (nonatomic, readonly) struct CGRect imageContainerViewFrame;

+ (double)buttonHeight;
+ (double)heightForButtonsViewWithButtonCount:(long long)arg1;

- (id)initWithContainerSize:(struct CGSize)arg1 insets:(struct UIEdgeInsets)arg2 buttonCount:(long long)arg3;
- (struct CGRect)actionButtonsViewFrameForButtonCount:(long long)arg1;

@end
