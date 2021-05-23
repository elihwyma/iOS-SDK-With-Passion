/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class HDProfile, NSString;

@protocol ACHTemplateEntitySyncedTemplatesObserver;

@interface ACHTemplateEntityWrapper : NSObject

{
    HDProfile *_profile;
    id <ACHTemplateEntitySyncedTemplatesObserver> _syncedTemplatesObserver;
}

@property (retain, nonatomic) HDProfile *profile;
@property (weak, nonatomic) id <ACHTemplateEntitySyncedTemplatesObserver> syncedTemplatesObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithProfile:(id)arg1;
- (id)allTemplatesWithError:(id *)arg1;
- (_Bool)removeTemplates:(id)arg1 error:(id *)arg2;
- (_Bool)insertTemplates:(id)arg1 provenance:(long long)arg2 databaseContext:(id)arg3 error:(id *)arg4;
- (void)templateEntityDidReceiveSyncedTemplates:(id)arg1 provenance:(long long)arg2;

@end
