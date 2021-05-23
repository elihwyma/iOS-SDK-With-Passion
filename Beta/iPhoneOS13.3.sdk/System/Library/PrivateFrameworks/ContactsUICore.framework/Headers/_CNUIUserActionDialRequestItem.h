/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <ContactsUICore/CNUIUserActionItem.h>

@protocol CNTUDialRequest;

@interface _CNUIUserActionDialRequestItem : CNUIUserActionItem

{
    id <CNTUDialRequest> _dialRequest;
}

@property (nonatomic, readonly) id <CNTUDialRequest> dialRequest;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)performActionWithContext:(id)arg1;
- (id)initWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 dialRequest:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;

@end
