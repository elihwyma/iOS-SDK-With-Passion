/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NBPhoneMetaData, NSString;

__attribute__((visibility("hidden")))
@interface NBMetadataHelper : NSObject

{
    NBPhoneMetaData *_cachedMetaData;
    NSString *_cachedMetaDataKey;
}

@property (retain, nonatomic) NBPhoneMetaData *cachedMetaData;
@property (retain, nonatomic) NSString *cachedMetaDataKey;

+ (_Bool)hasValue:(id)arg1;

- (void)initializeHelper;
- (id)CCode2CNMap;
- (void)clearHelper;
- (id)getAllMetadata;
- (id)regionCodeFromCountryCode:(id)arg1;
- (id)countryCodeFromRegionCode:(id)arg1;
- (id)stringByTrimming:(id)arg1;
- (id)normalizeNonBreakingSpace:(id)arg1;
- (id)getMetadataForRegion:(id)arg1;
- (id)getMetadataForNonGeographicalRegion:(id)arg1;

@end
