/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIBarButtonItem.h>

__attribute__((visibility("hidden")))
@interface CNUICancelBarButtonItem : UIBarButtonItem

{
    CDUnknownBlockType _didTapHandler;
}

@property (nonatomic, readonly) CDUnknownBlockType didTapHandler;

- (id)initWithDidTapHandler:(CDUnknownBlockType)arg1;
- (void)didTap:(id)arg1;

@end
