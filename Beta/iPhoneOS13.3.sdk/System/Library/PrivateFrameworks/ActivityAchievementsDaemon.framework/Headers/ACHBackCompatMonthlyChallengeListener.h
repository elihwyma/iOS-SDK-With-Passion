/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class ACHTemplateStore, HDProfile, NSDictionary, NSString;

@interface ACHBackCompatMonthlyChallengeListener : NSObject

{
    HDProfile *_profile;
    ACHTemplateStore *_templateStore;
    CDUnknownBlockType _readTemplatesBlock;
    NSDictionary *_injectedKeyValuePairs;
}

@property (weak, nonatomic) HDProfile *profile;
@property (weak, nonatomic) ACHTemplateStore *templateStore;
@property (copy, nonatomic) CDUnknownBlockType readTemplatesBlock;
@property (retain, nonatomic) NSDictionary *injectedKeyValuePairs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)_protectedNanoUserDefaultsDidSyncWithNotification:(id)arg1;
- (_Bool)_readAndSaveBackCompatDefinitions;
- (id)_definitionsFromKeyValuePairs:(id)arg1;
- (id)initWithProfile:(id)arg1 templateStore:(id)arg2;

@end
