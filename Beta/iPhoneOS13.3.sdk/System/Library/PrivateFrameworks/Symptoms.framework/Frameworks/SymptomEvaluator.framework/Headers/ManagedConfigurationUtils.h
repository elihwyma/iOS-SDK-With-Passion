/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface ManagedConfigurationUtils : NSObject

{
    void *_managedConfigurationDylibHandle;
    _Bool _diagnosticsAndUsageEnabled;
    NSArray *_installedVisibleProfileIdentifiers;
}

@property (nonatomic) _Bool diagnosticsAndUsageEnabled;
@property (retain, nonatomic) NSArray *installedVisibleProfileIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;

@end
