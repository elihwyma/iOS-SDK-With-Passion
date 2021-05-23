/*
 Image: /System/Library/PrivateFrameworks/Categories.framework/Categories
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CTCategories : NSObject

{
    NSString *_indexVersionId;
}

@property (copy, readonly) NSArray *availableCategoryIDs;

+ (void)initialize;
+ (id)sharedCategories;
+ (id)systemUnblockableBundleIdentifiersForDeviceFamily:(long long)arg1;
+ (id)systemBlockableBundleIdentifiersForDeviceFamily:(long long)arg1;
+ (id)systemHiddenBundleIdentifiersForDeviceFamily:(long long)arg1;
+ (long long)currentIOSDevice;
+ (id)systemUnblockableBundleIdentifiers;
+ (id)systemBlockableBundleIdentifiers;
+ (id)systemHiddenBundleIdentifiers;
+ (id)systemBundleIdentifiers;

- (id)init;
- (void)dealloc;
- (void)categoriesForBundleIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)categoryForDomainURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)categoriesForDomainURLs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_emptySharedCache:(id)arg1;
- (void)categoriesForBundleIDs:(id)arg1 platform:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)categoriesForDomainNames:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)categoryForBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)categoryForDomainName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)categoryForBundleID:(id)arg1 platform:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)unCategorizedDomainsFromDomains:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)categoryForBundleID:(id)arg1 responseWithError:(CDUnknownBlockType)arg2;
- (void)categoryForBundleID:(id)arg1 response:(CDUnknownBlockType)arg2;
- (void)categoryForDomainName:(id)arg1 response:(CDUnknownBlockType)arg2;
- (void)categoryForDomainName:(id)arg1 responseWithError:(CDUnknownBlockType)arg2;
- (void)categoryForDomainURL:(id)arg1 response:(CDUnknownBlockType)arg2;
- (void)categoryForDomainURL:(id)arg1 responseWithError:(CDUnknownBlockType)arg2;
- (void)categoriesForBundleIDs:(id)arg1 response:(CDUnknownBlockType)arg2;
- (void)categoriesForBundleIDs:(id)arg1 responseWithError:(CDUnknownBlockType)arg2;
- (void)categoriesForDomainNames:(id)arg1 response:(CDUnknownBlockType)arg2;
- (void)categoriesForDomainNames:(id)arg1 responseWithError:(CDUnknownBlockType)arg2;
- (void)categoriesForDomainURLs:(id)arg1 response:(CDUnknownBlockType)arg2;
- (void)categoriesForDomainURLs:(id)arg1 responseWithError:(CDUnknownBlockType)arg2;

@end
