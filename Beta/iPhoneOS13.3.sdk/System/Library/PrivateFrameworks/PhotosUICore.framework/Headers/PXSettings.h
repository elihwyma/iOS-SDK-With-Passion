/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/_UISettings.h>

@class NSMutableSet, NSSet;

@interface PXSettings : _UISettings

{
    NSMutableSet *_archivedSettings;
    NSSet *_cachedTransientProperties;
    long long _version;
}

@property (nonatomic) long long version;

+ (id)sharedInstance;
+ (id)_userDefaults;
+ (id)suiteName;
+ (id)_defaultsKey;
+ (void)setSuiteName:(id)arg1;
+ (id)transientProperties;
+ (id)_signatureDictionaryWithDefaultSettings:(id *)arg1;
+ (id)createSharedInstance;

- (void)save;
- (void)addKeyPathObserver:(id)arg1;
- (void)removeKeyPathObserver:(id)arg1;
- (id)parentSettings;
- (void)addKeyObserver:(id)arg1;
- (void)removeKeyObserver:(id)arg1;
- (void)applyArchiveValue:(id)arg1 forKey:(id)arg2;
- (id)archiveValueForKey:(id)arg1;
- (void)performPostSaveActions;
- (void)defaultValueDidChangeForKey:(id)arg1;
- (_Bool)_isTransientKey:(id)arg1;
- (void)_resetValuesThatChangedBetweenCurrentDefaultValues:(id)arg1 andArchivedDefaultValues:(id)arg2 defaultSettings:(id)arg3;
- (void)_validateArchivableValue:(id)arg1 forKey:(id)arg2;
- (void)addDeferredKeyObserver:(id)arg1;
- (void)addDeferredKeyPathObserver:(id)arg1;

@end
