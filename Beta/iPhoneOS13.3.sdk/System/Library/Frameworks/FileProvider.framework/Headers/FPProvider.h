/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@class NSArray, NSFileProviderDomain, NSString, NSURL;

@interface FPProvider

{
    NSArray *_supportedSortDescriptors;
    long long _type;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *providerIdentifier;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSURL *bundleURL;
@property (nonatomic, readonly) NSURL *storageURL;
@property (nonatomic, readonly) NSFileProviderDomain *domain;
@property (nonatomic, readonly) NSArray *supportedSortDescriptors;
@property (nonatomic, readonly) long long type;

+ (_Bool)supportsSecureCoding;
+ (id)beginMonitoringProviderChangesWithHandler:(CDUnknownBlockType)arg1;
+ (void)endMonitoringProviderChanges:(id)arg1;
+ (void)fetchProviderForItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localizedTitleForSortDescriptor:(id)arg1;

@end
