/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/EMMailboxScope.h>

@class NSString;

@interface _EMSpecialMailboxScope : EMMailboxScope

{
    NSString *_identifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *identifier;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)ef_publicDescription;
- (id)allMailboxObjectIDsWithMailboxTypeResolver:(id)arg1 forExclusion:(_Bool *)arg2;
- (_Bool)scopeContainsMailbox:(id)arg1;
- (id)cachedSelf;
- (id)mailboxTypes;
- (_Bool)excludeTypes;
- (id)mailboxObjectIDs;
- (_Bool)excludeMailboxes;
- (id)mailboxScopeByAddingMailboxes:(id)arg1;
- (id)mailboxScopeByRemovingMailboxes:(id)arg1;
- (_Bool)scopeContainsMailboxObjectID:(id)arg1 mailboxTypeResolver:(id)arg2;

@end
