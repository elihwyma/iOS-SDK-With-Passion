/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNContactAction.h>

@class CNUIUserActivityManager;

__attribute__((visibility("hidden")))
@interface CNEditInAppAction : CNContactAction

{
    CNUIUserActivityManager *_activityManager;
}

@property (nonatomic, readonly) CNUIUserActivityManager *activityManager;

- (id)title;
- (void)performActionWithSender:(id)arg1;
- (id)initWithContact:(id)arg1 activityManager:(id)arg2;

@end
