/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class NSString;

@interface GEONavdClientInfo : NSObject <Swift>

{
    NSString *_canonicalName;
    NSString *_uniqueClientId;
}

@property (copy, nonatomic) NSString *canonicalName;
@property (copy, nonatomic) NSString *uniqueClientId;

+ (_Bool)supportsSecureCoding;
+ (id)clientInfoForNavdPredictions;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCanonicalName:(id)arg1 instanceId:(unsigned long long)arg2;
- (_Bool)isCalendarClientInfo;
- (_Bool)isNavdClientInfo;

@end
