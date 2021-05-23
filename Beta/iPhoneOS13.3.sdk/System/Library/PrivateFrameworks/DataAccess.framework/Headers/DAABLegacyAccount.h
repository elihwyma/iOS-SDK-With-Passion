/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface DAABLegacyAccount : NSObject

{
    void *_account;
}

@property (nonatomic, readonly) void *account;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)identifier;
- (_Bool)isGroup;
- (_Bool)isContact;
- (int)legacyIdentifier;
- (id)externalIdentifier;
- (_Bool)isContainer;
- (void)markForDeletion;
- (void)updateSaveRequest:(id)arg1;
- (_Bool)isAccount;
- (id)initWithABAccout:(void *)arg1;

@end
