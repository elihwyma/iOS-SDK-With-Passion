/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <ContactsUICore/CNUIUserActionItem.h>

@class NSUserActivity;

@interface _CNUIUserActionUserActivityItem : CNUIUserActionItem

{
    NSUserActivity *_userActivity;
}

@property (nonatomic, readonly) NSUserActivity *userActivity;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)performActionWithContext:(id)arg1;
- (_Bool)_isIntent:(id)arg1 equalToOther:(id)arg2;
- (unsigned long long)_hashForIntent:(id)arg1;
- (id)_personFromIntent:(id)arg1;
- (id)initWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 userActivity:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;

@end
