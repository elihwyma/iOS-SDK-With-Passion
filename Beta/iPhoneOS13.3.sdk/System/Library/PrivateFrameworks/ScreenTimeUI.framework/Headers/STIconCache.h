/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Foundation/NSObject.h>

@class CNMonogrammer, NSCache, NSMutableSet, NSPersonNameComponentsFormatter, NSURLSession, UIImage;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface STIconCache : NSObject

{
    NSCache *_iconByKeyCache;
    CNMonogrammer *_monogrammer;
    NSPersonNameComponentsFormatter *_personNameComponentsFormatter;
    NSObject<OS_dispatch_queue> *_lookupQueue;
    NSURLSession *_urlSession;
    NSMutableSet *_bundleIdentifiersWithPendingRequests;
}

@property (retain, nonatomic) CNMonogrammer *monogrammer;
@property (retain, nonatomic) NSPersonNameComponentsFormatter *personNameComponentsFormatter;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *lookupQueue;
@property (nonatomic, readonly) NSURLSession *urlSession;
@property (nonatomic, readonly) NSMutableSet *bundleIdentifiersWithPendingRequests;
@property (readonly) UIImage *imageForBlankApplicationIcon;

+ (id)sharedCache;

- (id)init;
- (void)dealloc;
- (id)blankSpaceImageWithSize:(struct CGSize)arg1;
- (id)imageForCategoryIdentifier:(id)arg1;
- (id)imageForBundleIdentifier:(id)arg1;
- (void)removeObserver:(id)arg1 bundleIdentifier:(id)arg2;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 bundleIdentifier:(id)arg3;
- (id)personImageWithDSID:(id)arg1 fullName:(id)arg2;
- (void)_fetchImageForAppInfoIfNeeded:(id)arg1;
- (void)_handleiTunesResponseForAppInfo:(id)arg1 response:(id)arg2 data:(id)arg3 error:(id)arg4;
- (void)_updateCacheWithImage:(id)arg1 bundleIdentifier:(id)arg2;
- (id)_newCircleImageWithFillColor:(id)arg1 fillDiameter:(double)arg2 outlineColor:(id)arg3 outlineWidth:(double)arg4;
- (id)_personImageWithDSID:(id)arg1 fullName:(id)arg2 appleID:(id)arg3 forceFetch:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)monogramImageForNameComponents:(id)arg1;
- (void)_fetchFamilyPhotoWithDSID:(id)arg1 fullName:(id)arg2 appleID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_updateCacheWithImage:(id)arg1 dsid:(id)arg2;
- (id)circleImageWithFillColor:(id)arg1 fillDiameter:(double)arg2 outlineColor:(id)arg3 outlineWidth:(double)arg4;
- (id)roundedImageForImageWithName:(id)arg1;
- (void)fetchPersonImageWithDSID:(id)arg1 fullName:(id)arg2 appleID:(id)arg3 forceFetch:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end
