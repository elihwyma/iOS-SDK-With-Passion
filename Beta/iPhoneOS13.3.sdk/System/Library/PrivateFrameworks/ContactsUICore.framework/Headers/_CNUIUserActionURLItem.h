/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <ContactsUICore/CNUIUserActionItem.h>

@class CNFuture;

@interface _CNUIUserActionURLItem : CNUIUserActionItem

{
    _Bool _isSensitive;
    CNFuture *_url;
}

@property (nonatomic, readonly) CNFuture *url;
@property (nonatomic, readonly) _Bool isSensitive;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)performActionWithContext:(id)arg1;
- (id)performActionWithContext:(id)arg1 shouldCurateIfPerformed:(_Bool)arg2;
- (id)initWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 url:(id)arg4 isSensitive:(_Bool)arg5 group:(long long)arg6 options:(unsigned long long)arg7;
- (id)initWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 url:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;

@end
