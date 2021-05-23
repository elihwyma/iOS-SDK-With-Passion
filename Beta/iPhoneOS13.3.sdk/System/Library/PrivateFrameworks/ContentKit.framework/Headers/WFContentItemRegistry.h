/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSSet;

@interface WFContentItemRegistry : NSObject

{
    struct os_unfair_lock_s _discoveryLock;
    NSMutableDictionary *_contentItemClassesByType;
    NSMutableSet *_allItemClasses;
}

@property (nonatomic, readonly) NSMutableDictionary *contentItemClassesByType;
@property (nonatomic, readonly) NSMutableSet *allItemClasses;
@property (nonatomic, readonly) struct os_unfair_lock_s discoveryLock;
@property (nonatomic, readonly) NSSet *contentItemClasses;
@property (nonatomic, readonly) NSSet *allOwnedTypes;

+ (id)sharedRegistry;
+ (id)allContentItemClassesInContentKit;

- (id)init;
- (id)contentItemClassesSupportingType:(id)arg1;
- (Class)contentItemClassForType:(id)arg1;
- (id)contentItemClassesForShareSheetWithExtensionMatchingDictionaries:(id)arg1 hostBundleIdentifier:(id)arg2;
- (void)rediscoverContentItemClassesIfNeeded;
- (void)registerContentItemClass:(Class)arg1;
- (id)contentItemClassesForShareSheetWithExtensionMatchingDictionaries:(id)arg1;

@end
