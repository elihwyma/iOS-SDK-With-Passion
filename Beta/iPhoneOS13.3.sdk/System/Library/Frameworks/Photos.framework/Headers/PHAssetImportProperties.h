/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHAssetPropertySet.h>

@interface PHAssetImportProperties : PHAssetPropertySet

{
    long long _importedBy;
}

@property (nonatomic, readonly) long long importedBy;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;

@end
