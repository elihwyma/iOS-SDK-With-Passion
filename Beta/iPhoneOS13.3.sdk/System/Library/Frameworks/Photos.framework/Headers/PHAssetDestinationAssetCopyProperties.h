/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHAssetPropertySet.h>

@interface PHAssetDestinationAssetCopyProperties : PHAssetPropertySet

{
    long long _destinationAssetCopyState;
}

@property (nonatomic, readonly) long long destinationAssetCopyState;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;

@end
