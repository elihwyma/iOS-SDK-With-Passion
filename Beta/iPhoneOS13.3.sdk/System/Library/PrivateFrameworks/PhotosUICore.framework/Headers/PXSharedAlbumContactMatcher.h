/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class CNContactStore, NSCache;

@interface PXSharedAlbumContactMatcher : NSObject

{
    CNContactStore *_contactStore;
    NSCache *_monogrammersByContactImageDiameter;
    NSCache *_contactIdentifiersBySubscriberIdentifiers;
    NSCache *_contactPhotosCache;
}

+ (id)sharedMatcher;

- (id)init;
- (void)_observeContactStoreNotifications;
- (id)contactsMatchingSubscriberInfos:(id)arg1 keysToFetch:(id)arg2;
- (id)contactPhotoForContact:(id)arg1 diameter:(double)arg2;
- (id)_fetchContactMatchingIdentifier:(id)arg1 keysToFetch:(id)arg2;
- (id)_fetchContactsMatchingIdentifiers:(id)arg1 keysToFetch:(id)arg2;
- (id)_fetchContactMatchingSubscriberInfo:(id)arg1 keysToFetch:(id)arg2;
- (void)contactsDidChange:(id)arg1;

@end
