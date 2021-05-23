/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTArchiverBasedStoreRoot, AVTCoreEnvironment, NSArray, NSDictionary, NSString, NSURL;

@protocol AVTAvatarRecordChangeTracker, AVTStoreBackendDelegate;

@interface AVTArchiverBasedStoreBackend : NSObject

{
    NSURL *_storeLocation;
    NSString *_domainIdentifier;
    AVTCoreEnvironment *_environment;
    AVTArchiverBasedStoreRoot *_model;
    NSDictionary *_avatarsByIdentifiers;
    NSArray *_sortedAvatars;
}

@property (copy, nonatomic, readonly) NSURL *storeLocation;
@property (copy, nonatomic, readonly) NSString *domainIdentifier;
@property (nonatomic, readonly) AVTCoreEnvironment *environment;
@property (retain, nonatomic) AVTArchiverBasedStoreRoot *model;
@property (copy, nonatomic) NSDictionary *avatarsByIdentifiers;
@property (copy, nonatomic) NSArray *sortedAvatars;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <AVTStoreBackendDelegate> backendDelegate;
@property (nonatomic, readonly) id <AVTAvatarRecordChangeTracker> recordChangeTracker;

+ (id)classifyRecordsByIdentifiers:(id)arg1;
+ (id)rootBySavingAvatarRecord:(id)arg1 afterAvatarRecord:(id)arg2 forDomainIdentifier:(id)arg3 toRoot:(id)arg4;
+ (id)rootByRemovingAvatarWithIdentifier:(id)arg1 fromRoot:(id)arg2;
+ (id)storeLocationForDomainIdentifier:(id)arg1 environment:(id)arg2;

- (void)loadModel:(id)arg1;
- (id)avatarsForFetchRequest:(id)arg1 error:(id *)arg2;
- (_Bool)saveAvatar:(id)arg1 error:(id *)arg2;
- (_Bool)saveAvatars:(id)arg1 error:(id *)arg2;
- (_Bool)deleteAvatarWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)duplicateAvatarRecord:(id)arg1 error:(id *)arg2;
- (_Bool)canCreateAvatarWithError:(id *)arg1;
- (_Bool)loadContentFromDisk:(id *)arg1;
- (_Bool)loadContentFromDiskIfNeeded:(id *)arg1;
- (id)allAvatars;
- (id)avatarsWithIdentifiers:(id)arg1 error:(id *)arg2;
- (id)avatarsExcludingIdentifiers:(id)arg1 error:(id *)arg2;
- (_Bool)saveModel:(id)arg1 logger:(id)arg2 error:(id *)arg3;
- (unsigned long long)avatarCountWithError:(id *)arg1;
- (id)initWithStoreLocation:(id)arg1 domainIdentifier:(id)arg2 environment:(id)arg3;

@end
