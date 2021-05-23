/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class NSArray, NSDictionary;

@interface GEORequestCounterInfo : NSObject <Swift>

{
    NSDictionary *_requestTypeStatistics;
    unsigned long long _bytesTransmitted;
    unsigned long long _bytesReceived;
}

@property (nonatomic, readonly) NSArray *requestTypes;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)_formattedString;
- (unsigned long long)xmitBytes;
- (unsigned long long)recvBytes;
- (unsigned long long)xmitBytesForType:(unsigned char)arg1;
- (unsigned long long)recvBytesForType:(unsigned char)arg1;
- (unsigned long long)numberOfRequestsForType:(unsigned char)arg1 result:(unsigned char)arg2;
- (void)_generateAggregateStatistics;
- (id)nonZeroResultTypesForType:(unsigned char)arg1;

@end
