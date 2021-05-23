/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHAssetPropertySet.h>

@class NSString;

@interface PHAssetAdjustmentProperties : PHAssetPropertySet

{
    NSString *_formatIdentifier;
    NSString *_formatVersion;
    unsigned long long _originalResourceChoice;
}

@property (nonatomic, readonly) NSString *formatIdentifier;
@property (nonatomic, readonly) NSString *formatVersion;
@property (nonatomic, readonly) unsigned long long originalResourceChoice;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;

@end
