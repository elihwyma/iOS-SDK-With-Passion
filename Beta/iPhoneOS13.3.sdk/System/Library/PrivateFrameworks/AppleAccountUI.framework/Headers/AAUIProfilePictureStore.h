/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <Foundation/NSObject.h>

@class AAGrandSlamSigner, ACAccount, ACAccountStore, CNContactStore, CNMonogrammer, NSOperationQueue;

@protocol NSObject;

@interface AAUIProfilePictureStore : NSObject

{
    ACAccount *_account;
    ACAccountStore *_accountStore;
    AAGrandSlamSigner *_grandSlamSigner;
    CNContactStore *_contactStore;
    id <NSObject> _contactStoreDidChangeObserver;
    CNMonogrammer *_monogrammer;
    NSOperationQueue *_networkingQueue;
    struct os_unfair_lock_s _monogrammerLock;
    double _pictureDiameter;
    long long _monogramType;
}

@property (nonatomic) double pictureDiameter;
@property (nonatomic) long long monogramType;

- (id)init;
- (void)dealloc;
- (id)initWithAppleAccount:(id)arg1 grandSlamAccount:(id)arg2 accountStore:(id)arg3;
- (id)initWithGrandSlamSigner:(id)arg1;
- (id)_monogrammer;
- (void)_contactStoreDidChange:(id)arg1;
- (void)setPictureStyle:(long long)arg1;
- (id)profilePictureForFamilyMember:(id)arg1;
- (void)_beginObservingContactStoreDidChangeNotifications;
- (id)initWithAppleAccount:(id)arg1 grandSlamSigner:(id)arg2;
- (void)_endObservingContactStoreDidChangeNotifications;
- (void)_invalidateMonogrammer;
- (id)profilePictureForAccountOwnerWithoutMonogramFallback;
- (id)_fallbackProfilePictureForPersonWithFirstName:(id)arg1 lastName:(id)arg2;
- (id)_correctlySizedImageFromImage:(id)arg1;
- (id)_meCardPicture;
- (void)_fetchProfilePictureForAccountOwnerFromServer:(id)arg1 serverCacheTag:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_contactSyncsWithiCloud:(id)arg1 error:(id *)arg2;
- (void)_updateServerProfilePictureForAccountOwner:(id)arg1 cropRect:(id)arg2;
- (id)_profilePictureForFamilyMemberWithoutMonogramFallback:(id)arg1;
- (id)_familyMemberPersonPicture:(id)arg1;
- (void)_fetchProfilePictureForFamilyMemberFromServer:(id)arg1 serverCacheTag:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchAndCacheRawImageAndCropRectWithRequest:(id)arg1 personID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_meCardRawImageAndCropRect:(CDUnknownBlockType)arg1;
- (void)_familyMember:(id)arg1 rawImageAndCropRect:(CDUnknownBlockType)arg2;
- (void)_fetchProfilePictureSupersetWithRequest:(id)arg1 personID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchProfilePictureWithRequest:(id)arg1 personID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)cacheablePictureForPicture:(id)arg1 cropRect:(struct CGRect)arg2;
- (id)_monogrammedContactImage:(id)arg1;
- (void)_decodeImageAndCropRectForContact:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_contactWithImageDataMatchingFamilyMember:(id)arg1 error:(id *)arg2;
- (id)_getAccountIdentifierForContact:(id)arg1 error:(id *)arg2;
- (void)_updateServerProfilePictureWithRequest:(id)arg1;
- (id)_profilePictureForPicture:(id)arg1 crop:(_Bool)arg2 cropRect:(struct CGRect)arg3 cacheable:(_Bool)arg4;
- (id)initWithAppleAccount:(id)arg1 store:(id)arg2;
- (long long)pictureStyle;
- (id)profilePictureForAccountOwner;
- (void)fetchProfilePictureForAccountOwner:(CDUnknownBlockType)arg1;
- (void)setProfilePictureForAccountOwner:(id)arg1 cropRect:(id)arg2;
- (void)fetchProfilePictureForFamilyMember:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchRawImageAndCropRectForAccountOwner:(CDUnknownBlockType)arg1;
- (void)fetchRawImageAndCropRectForFamilyMember:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)profilePictureForPicture:(id)arg1;
- (id)profilePictureForPicture:(id)arg1 cropRect:(struct CGRect)arg2;

@end
