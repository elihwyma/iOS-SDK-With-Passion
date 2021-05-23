/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableSet, NSString;

@interface PSSpecifierDataSource : NSObject

{
    NSMutableSet *_observerRefs;
    _Bool _specifiersLoaded;
    NSMutableArray *_specifiers;
}

@property (nonatomic, readonly) NSMutableArray *specifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)loadSpecifiersFromPlist:(id)arg1 inBundle:(id)arg2 target:(id)arg3 stringsTable:(id)arg4;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)observers;
- (void)reloadSpecifiers;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (id)readPreferenceValue:(id)arg1;
- (id)specifiersForSpecifier:(id)arg1 observer:(id)arg2;
- (id)specifierForID:(id)arg1;
- (void)loadSpecifiers;
- (id)observersOfClass:(Class)arg1;
- (void)enumerateObserversOfClass:(Class)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateObserversUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)areSpecifiersLoaded;
- (void)_clearAllSpecifiers;
- (void)_invalidateSpecifiersForObservers;
- (void)performUpdates:(id)arg1;
- (void)performUpdatesAnimated:(_Bool)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end
