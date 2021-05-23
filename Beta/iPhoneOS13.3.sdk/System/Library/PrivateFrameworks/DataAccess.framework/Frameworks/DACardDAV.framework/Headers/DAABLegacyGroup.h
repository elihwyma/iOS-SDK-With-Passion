/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface DAABLegacyGroup : NSObject

{
    void *_group;
}

@property (nonatomic, readonly) void *group;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithGroup:(void *)arg1;
- (_Bool)isGroup;
- (_Bool)isContact;
- (int)legacyIdentifier;
- (id)externalIdentifier;
- (void)setExternalIdentifier:(id)arg1;
- (id)externalUUID;
- (void)setExternalUUID:(id)arg1;
- (_Bool)isContainer;
- (void)markForDeletion;
- (void)updateSaveRequest:(id)arg1;
- (_Bool)isAccount;
- (id)asGroup;
- (id)eTag;
- (void)setETag:(id)arg1;
- (void *)asABGroup;

@end
