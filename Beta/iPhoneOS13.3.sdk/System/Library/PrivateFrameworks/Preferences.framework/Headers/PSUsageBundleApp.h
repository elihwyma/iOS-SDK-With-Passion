/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, PSWeakReference;

@protocol PSStorageReporting;

@interface PSUsageBundleApp : NSObject

{
    PSWeakReference *_storageReporterReference;
    _Bool _deletionRestricted;
    float _totalSize;
    NSString *_name;
    NSString *_bundleIdentifier;
    NSArray *_categories;
}

@property (weak, nonatomic) id <PSStorageReporting> usageBundleStorageReporter;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSArray *categories;
@property (nonatomic) float totalSize;
@property (nonatomic, getter=isDeletionRestricted) _Bool deletionRestricted;

+ (id)usageBundleAppForBundleWithIdentifier:(id)arg1 withTotalSize:(float)arg2 andCategories:(id)arg3;
+ (id)usageBundleAppForBundleWithIdentifier:(id)arg1 withTotalSize:(float)arg2;

- (id)description;

@end
