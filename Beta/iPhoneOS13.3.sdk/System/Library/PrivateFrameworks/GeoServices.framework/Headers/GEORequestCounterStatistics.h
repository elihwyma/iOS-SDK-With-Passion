/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface GEORequestCounterStatistics : NSObject <Swift>

{
    unsigned long long _bytesTransmitted;
    unsigned long long _bytesReceived;
    NSMutableDictionary *_resultCounts;
}

@property (nonatomic, readonly) unsigned long long bytesTransmitted;
@property (nonatomic, readonly) unsigned long long bytesReceived;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)incrementBytesTransmitted:(unsigned long long)arg1;
- (void)incrementBytesReceived:(unsigned long long)arg1;
- (void)incrementCount:(unsigned long long)arg1 forResult:(unsigned char)arg2;
- (unsigned long long)countForResult:(unsigned char)arg1;

@end
