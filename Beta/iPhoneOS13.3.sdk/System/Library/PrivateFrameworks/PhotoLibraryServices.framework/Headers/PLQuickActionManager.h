/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSData, NSOperationQueue, PLDatabaseContext, SBSApplicationShortcutService;

@interface PLQuickActionManager : NSObject

{
    id _cameraWellObserver;
    NSOperationQueue *_operationQueue;
    PLDatabaseContext *_databaseContext;
    _Bool __mostRecentPhotoIsInvalid;
    NSData *__cachedMostRecentPhotoData;
    SBSApplicationShortcutService *__appShortcutService;
    Class __SBSApplicationShortcutServiceClass;
    Class __SBSApplicationShortcutItemClass;
    Class __SBSApplicationShortcutCustomImageIconClass;
}

@property (retain, nonatomic, setter=_setCachedMostRecentPhotoData:) NSData *_cachedMostRecentPhotoData;
@property (nonatomic, setter=_setMostRecentPhotoIsInvalid:) _Bool _mostRecentPhotoIsInvalid;
@property (retain, nonatomic, setter=_setAppShortcutService:) SBSApplicationShortcutService *_appShortcutService;
@property (retain, nonatomic, setter=_setSBSApplicationShortcutServiceClass:) Class _SBSApplicationShortcutServiceClass;
@property (retain, nonatomic, setter=_setSBSApplicationShortcutItemClass:) Class _SBSApplicationShortcutItemClass;
@property (retain, nonatomic, setter=_setSBSApplicationShortcutCustomImageIconClass:) Class _SBSApplicationShortcutCustomImageIconClass;

- (void)dealloc;
- (id)initWithDatabaseContext:(id)arg1;
- (void)cameraPreviewWellImageDidChange;
- (void)buildQuickActionItems;
- (id)_buildMostRecentPhotoQuickAction;
- (id)_buildOneYearAgoQuickAction;
- (id)_buildFavoritesQuickAction;
- (id)_buildSearchQuickAction;
- (id)_shortcutSystemImageNamed:(id)arg1;
- (_Bool)_userHasPhotos;
- (_Bool)_userHasPhotosFromLastYear;

@end
