/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class FBSSceneIdentity, NSSet, NSString, SBActivationSettings, SBApplication, SBSAppDragLocalContext, UIDraggingSystemSession;

@protocol OS_dispatch_group, UIDragDropSession;

@interface SBApplicationDropSession : NSObject

{
    NSObject<OS_dispatch_group> *_activationSettingsGroup;
    _Bool _notificationDrag;
    _Bool _windowTearOff;
    SBActivationSettings *_activationSettings;
    SBApplication *_application;
    FBSSceneIdentity *_sceneIdentity;
    id <UIDragDropSession> _uiDragDropSession;
    UIDraggingSystemSession *_systemSession;
    SBSAppDragLocalContext *_localContext;
    NSSet *_launchActions;
    NSString *_targetContentIdentifier;
}

@property (retain, nonatomic) FBSSceneIdentity *sceneIdentity;
@property (copy, nonatomic) NSString *targetContentIdentifier;
@property (nonatomic, readonly) SBApplication *application;
@property (nonatomic, readonly) id <UIDragDropSession> uiDragDropSession;
@property (nonatomic, readonly) UIDraggingSystemSession *systemSession;
@property (nonatomic, readonly) long long dropZones;
@property (nonatomic, readonly, getter=isNotificationDrag) _Bool notificationDrag;
@property (nonatomic, readonly, getter=isWindowTearOff) _Bool windowTearOff;
@property (nonatomic, readonly) SBSAppDragLocalContext *localContext;
@property (nonatomic, readonly) SBActivationSettings *activationSettings;
@property (nonatomic, readonly) NSSet *launchActions;

+ (_Bool)_dragItemRepresentsAcceptableFileDrag:(id)arg1;
+ (void)_getLocalAppDropSessionWithUIDragDropSession:(id)arg1 dragItem:(id)arg2 systemSession:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)_applicationForIconLeafIdentifier:(id)arg1;
+ (void)_getUserNotificationDropSessionWithUIDragDropSession:(id)arg1 systemSession:(id)arg2 dragItem:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)_getUserActivityDropSessionWithUIDragDropSession:(id)arg1 dragItem:(id)arg2 systemSession:(id)arg3 targetApplication:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)_getFileDropSessionWithUIDragDropSession:(id)arg1 dragItem:(id)arg2 systemSession:(id)arg3 targetApplication:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)_getURLDropSessionWithUIDragDropSession:(id)arg1 dragItem:(id)arg2 systemSession:(id)arg3 targetApplication:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)_applicationProxyForIdentifiers:(id)arg1 forURL:(id)arg2 passingTest:(CDUnknownBlockType)arg3 error:(id *)arg4;
+ (_Bool)_itemProviderRequiresOpenInPlace:(id)arg1;
+ (id)_applicationForHandlingDragItem:(id)arg1 URL:(id)arg2 error:(id *)arg3;
+ (_Bool)canHandleUIDragDropSession:(id)arg1;
+ (id)dropSessionWithWindowUIDragSession:(id)arg1;
+ (void)getDropSessionWithUIDropSession:(id)arg1 sceneProvider:(id)arg2 completion:(CDUnknownBlockType)arg3;

- (id)initWithUIDragDropSession:(id)arg1 systemSession:(id)arg2 application:(id)arg3 targetContentIdentifier:(id)arg4 localContext:(id)arg5;
- (void)calculateSceneIdentityWithSceneProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithUIDragDropSession:(id)arg1 systemSession:(id)arg2 application:(id)arg3 targetContentIdentifier:(id)arg4;
- (id)initWithUIDragDropSession:(id)arg1 systemSession:(id)arg2 application:(id)arg3 targetContentIdentifier:(id)arg4 URL:(id)arg5 requiresOpenInPlace:(_Bool)arg6;
- (id)initWithUIDragDropSession:(id)arg1 systemSession:(id)arg2 application:(id)arg3 activity:(id)arg4 activityData:(id)arg5;
- (id)_initWithUIDragDropSession:(id)arg1 application:(id)arg2 targetContentIdentifier:(id)arg3;
- (_Bool)_isApplicationBoundToVisibleIcon;

@end
