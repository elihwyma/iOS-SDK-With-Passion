/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@protocol CNUINavigationListStyle;

__attribute__((visibility("hidden")))
@interface CNUINavigationListStyleApplier : NSObject

{
    id <CNUINavigationListStyle> _navigationListStyle;
}

@property (nonatomic, readonly) id <CNUINavigationListStyle> navigationListStyle;

- (id)initWithNavigationListStyle:(id)arg1;
- (void)applyNavigationListStyleToCell:(id)arg1;
- (void)applyNavigationListStyleToDetailCell:(id)arg1;
- (void)applyExpandedBackgroundNavigationListStyleToCell:(id)arg1;
- (void)applyCollapsedBackgroundNavigationListStyleToCell:(id)arg1;

@end
