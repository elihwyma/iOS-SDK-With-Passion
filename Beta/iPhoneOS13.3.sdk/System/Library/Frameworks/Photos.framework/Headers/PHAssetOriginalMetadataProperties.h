/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHAssetPropertySet.h>

@class NSString, NSTimeZone;

@interface PHAssetOriginalMetadataProperties : PHAssetPropertySet

{
    short _originalExifOrientation;
    NSString *_originalAssetsUUID;
    long long _originalHeight;
    long long _originalWidth;
    NSString *_originalFilename;
    unsigned long long _originalFilesize;
    NSTimeZone *_timeZone;
    long long _timeZoneOffset;
}

@property (nonatomic, readonly) NSString *originalAssetsUUID;
@property (nonatomic, readonly) long long originalHeight;
@property (nonatomic, readonly) long long originalWidth;
@property (nonatomic, readonly) NSString *originalFilename;
@property (nonatomic, readonly) short originalExifOrientation;
@property (nonatomic, readonly) unsigned long long originalFilesize;
@property (nonatomic, readonly) NSTimeZone *timeZone;
@property (nonatomic, readonly) long long timeZoneOffset;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;

@end
