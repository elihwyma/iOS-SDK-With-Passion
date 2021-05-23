/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface BBSettingsGateway : NSObject

{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)serverInterface;
+ (id)clientInterface;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)initWithQueue:(id)arg1;
- (id)allSectionInfo;
- (id)sectionInfoForSectionID:(id)arg1;
- (id)sectionInfoForSectionIDs:(id)arg1;
- (void)getSectionInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)getSectionInfoForActiveSectionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)getSectionInfoForSectionIDs:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (void)setSectionInfo:(id)arg1 forSectionID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)allEffectiveSectionInfo;
- (id)effectiveSectionInfoForSectionID:(id)arg1;
- (id)effectiveSectionInfoForSectionIDs:(id)arg1;
- (void)getEffectiveSectionInfoForSectionIDs:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getSectionInfoForSectionID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getEffectiveSectionInfoForSectionID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)activeSectionInfo;
- (id)allSectionIDs;
- (void)updateSectionInfoForSectionID:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)setEffectiveGlobalContentPreviewsSetting:(long long)arg1;
- (long long)effectiveGlobalContentPreviewsSetting;
- (void)getEffectiveGlobalContentPreviewsSettingWithCompletion:(CDUnknownBlockType)arg1;
- (void)setEffectiveGlobalSpokenNotificationSetting:(long long)arg1;
- (long long)effectiveGlobalSpokenNotificationSetting;
- (void)getEffectiveGlobalSpokenNotificationSettingWithCompletion:(CDUnknownBlockType)arg1;

@end
