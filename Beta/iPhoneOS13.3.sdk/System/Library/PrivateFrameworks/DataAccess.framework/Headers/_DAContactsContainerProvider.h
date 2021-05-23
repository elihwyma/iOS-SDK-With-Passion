/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <DataAccess/DAContainerProvider.h>

@class CNContactStore;

@interface _DAContactsContainerProvider : DAContainerProvider

{
    CNContactStore *_contactStore;
}

@property (nonatomic, readonly) CNContactStore *contactStore;

- (id)allContainers;
- (id)initWithContactStore:(id)arg1;
- (id)allContainersForAccountWithExternalIdentifier:(id)arg1;
- (id)containerWithExternalIdentifier:(id)arg1 forAccountWithExternalIdentifier:(id)arg2;
- (id)createNewContainerWithType:(int)arg1 name:(id)arg2 externalIdentifier:(id)arg3 constraintsPath:(id)arg4 syncData:(id)arg5 contentReadonly:(_Bool)arg6 propertiesReadonly:(_Bool)arg7 forAccount:(id)arg8;
- (void)setDefaultContainer:(id)arg1 withLocalDBHelper:(id)arg2 onlyIfNotSet:(_Bool)arg3;
- (_Bool)setLastSyncDateForContainer:(id)arg1;

@end
