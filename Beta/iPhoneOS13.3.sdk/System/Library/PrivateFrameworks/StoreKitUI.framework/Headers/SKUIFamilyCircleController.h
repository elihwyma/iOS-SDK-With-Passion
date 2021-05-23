/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class FAFamilyCircle, NSCache, NSNumber, SKUIClientContext, SSFamilyCircle;

@interface SKUIFamilyCircleController : NSObject

{
    NSCache *_imageCache;
    _Bool _hasLoaded;
    SSFamilyCircle *_iTunesFamily;
    SKUIClientContext *_clientContext;
    FAFamilyCircle *_iCloudFamily;
    NSNumber *_lastAccountID;
    long long _reloadPromptStyle;
}

@property (retain) NSNumber *lastAccountID;
@property long long reloadPromptStyle;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (nonatomic, readonly) _Bool hasLoaded;
@property (nonatomic, readonly) SSFamilyCircle *familyCircle;
@property (nonatomic, readonly) FAFamilyCircle *iCloudFamily;

+ (id)sharedController;

- (id)init;
- (void)dealloc;
- (void)_accountStoreDidChange:(id)arg1;
- (void)reloadData;
- (id)profilePictureForFamilyMember:(id)arg1;
- (void)_reloadDataWithPromptStyle:(long long)arg1;
- (void)_setITunesFamily:(id)arg1 error:(id)arg2 iCloudFamily:(id)arg3 error:(id)arg4;
- (void)_setProfilePicture:(id)arg1 forMember:(id)arg2;

@end
