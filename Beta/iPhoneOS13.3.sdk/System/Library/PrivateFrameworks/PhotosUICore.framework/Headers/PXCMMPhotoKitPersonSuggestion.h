/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class CNContact, NSString, PHFetchResult, PHPerson, PXRecipientTransport;

@interface PXCMMPhotoKitPersonSuggestion : NSObject

{
    CNContact *_fetchQueue_linkedContact;
    NSString *_localizedName;
    PHPerson *_person;
    PHFetchResult *_keyFaceFetchResult;
    PHFetchResult *_keyAssetFetchResult;
    PXRecipientTransport *_bestTransport;
}

@property (retain, nonatomic) PXRecipientTransport *bestTransport;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) PHPerson *person;
@property (nonatomic, readonly) CNContact *linkedContact;
@property (nonatomic, readonly) PHFetchResult *keyFaceFetchResult;
@property (nonatomic, readonly) PHFetchResult *keyAssetFetchResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_contactFetchQueue;
+ (id)personSuggestionWithPerson:(id)arg1;
+ (id)personSuggestionWithPerson:(id)arg1 keyFaceFetchResult:(id)arg2;
+ (id)personSuggestionWithPerson:(id)arg1 keyFaceFetchResult:(id)arg2 keyAssetFetchResult:(id)arg3;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)matchesRecipientInRecipients:(id)arg1;
- (id)initWithPerson:(id)arg1 keyFaceFetchResult:(id)arg2 keyAssetFetchResult:(id)arg3;
- (id)personSuggestionUpdatedKeyFaceFetchResult:(id)arg1;
- (id)personSuggestionUpdatedKeyAssetFetchResult:(id)arg1;
- (id)personSuggestionUpdatedPerson:(id)arg1;
- (id)_linkedContactForPerson:(id)arg1;
- (void)_prefetchLinkedContactInBackgroundForPerson:(id)arg1;

@end
