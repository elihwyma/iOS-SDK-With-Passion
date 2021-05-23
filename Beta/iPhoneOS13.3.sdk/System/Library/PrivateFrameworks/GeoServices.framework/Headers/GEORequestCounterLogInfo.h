/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class NSDictionary;

@interface GEORequestCounterLogInfo : NSObject <Swift>

{
    NSDictionary *_dict;
}

@property (nonatomic, readonly) double oldestTimestamp;
@property (nonatomic, readonly) unsigned char requestType;

+ (_Bool)supportsSecureCoding;
+ (id)counterLogInfoWithDictionary:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)_formattedString;
- (unsigned long long)xmitBytes;
- (unsigned long long)recvBytes;
- (id)_formattedCSVString;

@end
