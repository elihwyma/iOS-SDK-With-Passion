/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHAssetPropertySet.h>

@class NSData, NSString;

@interface PHAssetPhotosOneUpProperties : PHAssetPropertySet

{
    _Bool _reverseLocationDataIsValid;
    NSData *_reverseLocationData;
    unsigned long long _variationSuggestionStates;
}

@property (nonatomic, readonly) _Bool reverseLocationDataIsValid;
@property (nonatomic, readonly) NSData *reverseLocationData;
@property (nonatomic, readonly) NSString *addressString;
@property (nonatomic, readonly) unsigned long long variationSuggestionStates;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (id)_locationInfo;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;
- (id)localizedGeoDescriptionIsHome:(_Bool *)arg1;
- (id)placeNamesForLocalizedDetailedDescriptionIsHome:(_Bool *)arg1;

@end
