/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

#import <Email/Swift-Protocol.h>

@class NSSet, NSString;

@interface EMMailboxScope : NSObject <Swift>

{
    _Bool _excludeTypes;
    _Bool _excludeMailboxes;
    NSSet *_mailboxTypes;
    NSSet *_mailboxObjectIDs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSSet *mailboxTypes;
@property (nonatomic, readonly) _Bool excludeTypes;
@property (copy, nonatomic, readonly) NSSet *mailboxObjectIDs;
@property (nonatomic, readonly) _Bool excludeMailboxes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *ef_publicDescription;

+ (_Bool)supportsSecureCoding;
+ (id)mailboxScopeForMailboxObjectIDs:(id)arg1 forExclusion:(_Bool)arg2;
+ (id)allMailboxesScope;
+ (id)noMailboxesScope;
+ (id)mailboxScopeForMailboxType:(long long)arg1 forExclusion:(_Bool)arg2;
+ (id)mailboxScopeForMailboxTypes:(id)arg1 forExclusion:(_Bool)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)allMailboxObjectIDsWithMailboxTypeResolver:(id)arg1 forExclusion:(_Bool *)arg2;
- (_Bool)scopeContainsMailbox:(id)arg1;
- (id)cachedSelf;
- (id)initWithMailboxTypes:(id)arg1 excludeTypes:(_Bool)arg2 mailboxObjectIDs:(id)arg3 excludeMailboxes:(_Bool)arg4;
- (id)initWithMailboxTypes:(id)arg1 excludeTypes:(_Bool)arg2 mailboxObjectIDs:(id)arg3 excludeMailboxes:(_Bool)arg4 cached:(_Bool)arg5;
- (id)_mailboxTypesDescription;
- (id)_mailboxObjectIDsDescriptionIsDebug:(_Bool)arg1;
- (id)_mailboxObjectIDsForTypesWithMailboxTypeResolver:(id)arg1;
- (_Bool)_scopeContainsMailboxWithObjectID:(id)arg1 mailboxTypeBlock:(CDUnknownBlockType)arg2;
- (id)mailboxScopeByAddingMailboxes:(id)arg1;
- (id)mailboxScopeByRemovingMailboxes:(id)arg1;
- (_Bool)scopeContainsMailboxObjectID:(id)arg1 mailboxTypeResolver:(id)arg2;

@end
