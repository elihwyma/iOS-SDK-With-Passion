/*
 Image: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary;

@interface WPAdvertisingRequest : NSObject

{
    unsigned char _clientType;
    _Bool _connectable;
    _Bool _stopOnAdvertisingAddressChange;
    NSData *_advertisingData;
    long long _advertisingRate;
    double _updateTime;
    NSDictionary *_advertisingOptions;
    long long _priorityValue;
}

@property (nonatomic) unsigned char clientType;
@property long long priorityValue;
@property (retain, nonatomic) NSData *advertisingData;
@property long long advertisingRate;
@property double updateTime;
@property _Bool connectable;
@property (retain) NSDictionary *advertisingOptions;
@property _Bool stopOnAdvertisingAddressChange;

+ (_Bool)supportsSecureCoding;
+ (id)requestForClientType:(unsigned char)arg1;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)changePriorityValue:(long long)arg1;

@end
