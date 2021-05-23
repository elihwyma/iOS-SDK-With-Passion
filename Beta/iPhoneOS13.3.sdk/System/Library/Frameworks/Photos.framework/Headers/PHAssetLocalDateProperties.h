/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHAssetPropertySet.h>

@class NSNumber;

@interface PHAssetLocalDateProperties : PHAssetPropertySet

{
    NSNumber *_inferredTimeZoneOffset;
}

@property (nonatomic, readonly) NSNumber *inferredTimeZoneOffset;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;

@end
