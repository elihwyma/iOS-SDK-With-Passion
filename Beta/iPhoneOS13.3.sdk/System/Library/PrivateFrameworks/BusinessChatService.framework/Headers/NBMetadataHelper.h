/*
 Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

#import <Foundation/NSObject.h>

@class NSCache;

__attribute__((visibility("hidden")))
@interface NBMetadataHelper : NSObject

{
    NSCache *_metadataCache;
}

@property (retain, nonatomic) NSCache *metadataCache;

+ (id)CCode2CNMap;
+ (id)regionCodeFromCountryCode:(id)arg1;
+ (id)countryCodeFromRegionCode:(id)arg1;
+ (_Bool)hasValue:(id)arg1;
+ (id)jsonObjectFromZippedDataWithBytes:(char *)arg1 compressedLength:(unsigned long long)arg2 expandedLength:(unsigned long long)arg3;
+ (id)CN2CCodeMap;
+ (id)phoneNumberDataMap;

- (id)init;
- (id)getAllMetadata;
- (id)getMetadataForRegion:(id)arg1;
- (id)getMetadataForNonGeographicalRegion:(id)arg1;

@end
