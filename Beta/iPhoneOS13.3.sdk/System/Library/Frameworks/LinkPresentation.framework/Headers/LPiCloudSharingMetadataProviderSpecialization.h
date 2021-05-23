/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <LinkPresentation/LPMetadataProviderSpecialization.h>

@class CKContainer, NSString;

__attribute__((visibility("hidden")))
@interface LPiCloudSharingMetadataProviderSpecialization : LPMetadataProviderSpecialization

{
    NSString *_applicationFromURL;
    NSString *_titleFromURL;
    CKContainer *_baseContainer;
    CKContainer *_applicationContainer;
    _Bool _canceled;
}

+ (unsigned long long)specialization;
+ (id)specializedMetadataProviderForURLWithContext:(id)arg1;
+ (id)extractApplicationFromURL:(id)arg1;
+ (id)extractTitleFromURL:(id)arg1;
+ (id)applicationNameMap;

- (void)cancel;
- (void)start;
- (void)fail;
- (id)initWithContext:(id)arg1 applicationFromURL:(id)arg2 titleFromURL:(id)arg3;
- (id)entitlementForKey:(id)arg1;
- (_Bool)canUseCloudKit;
- (void)completeUsingApplication:(id)arg1 title:(id)arg2;
- (void)completeWithShareMetadata:(id)arg1 bundleIDs:(id)arg2;
- (id)applicationFromBundleIdentifiers:(id)arg1 containerIdentifier:(id)arg2;
- (id)iconFromShare:(id)arg1;

@end
