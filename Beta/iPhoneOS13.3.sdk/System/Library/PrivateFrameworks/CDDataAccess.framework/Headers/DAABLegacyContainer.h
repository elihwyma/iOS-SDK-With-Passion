/*
 Image: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess
 */

#import <NSObject.h>

@class NSString;

@interface DAABLegacyContainer : NSObject

{
    void *_source;
}

@property (nonatomic, readonly) void *source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)name;
- (long long)type;
- (void)setType:(long long)arg1;
- (void)setName:(id)arg1;
- (id)identifier;
- (id)accountIdentifier;
- (void)setAccountIdentifier:(id)arg1;
- (_Bool)isGroup;
- (_Bool)isLocal;
- (_Bool)isContact;
- (id)externalIdentifier;
- (void)setExternalIdentifier:(id)arg1;
- (id)constraintsPath;
- (void)setConstraintsPath:(id)arg1;
- (_Bool)isContainer;
- (void)setSyncData:(id)arg1;
- (id)syncData;
- (void)markForDeletion;
- (void)updateSaveRequest:(id)arg1;
- (_Bool)isAccount;
- (id)cTag;
- (void)setCTag:(id)arg1;
- (id)syncTag;
- (void)setSyncTag:(id)arg1;
- (void)setMeContactIdentifier:(id)arg1;
- (_Bool)isContentReadonly;
- (void)setContentReadonly:(_Bool)arg1;
- (_Bool)arePropertiesReadonly;
- (void)setArePropertiesReadonly:(_Bool)arg1;
- (_Bool)isSearchContainer;
- (void)markAsDefault;
- (void *)asSource;
- (id)asContainer;
- (id)initWithABSource:(void *)arg1;
- (id)meContactidentifier;

@end
