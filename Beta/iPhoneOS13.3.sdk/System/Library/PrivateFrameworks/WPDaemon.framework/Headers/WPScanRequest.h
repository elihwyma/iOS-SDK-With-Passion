/*
 Image: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDictionary, NSNumber;

@interface WPScanRequest : NSObject

{
    unsigned char _clientType;
    _Bool _allowDuplicates;
    _Bool _scanWhenLocked;
    _Bool _activeScanning;
    _Bool _scanCache;
    _Bool _advBuffer;
    NSNumber *_rssiThreshold;
    NSData *_blobValue;
    NSData *_maskValue;
    NSDictionary *_options;
    NSArray *_peers;
    double _updateTime;
    long long _nearbyScanMode;
    long long _advBufferMode;
    CDStruct_9e3626a3 _scanningRates;
}

@property unsigned char clientType;
@property CDStruct_9e3626a3 scanningRates;
@property _Bool allowDuplicates;
@property _Bool scanWhenLocked;
@property _Bool activeScanning;
@property _Bool scanCache;
@property (retain) NSNumber *rssiThreshold;
@property (retain, nonatomic) NSData *blobValue;
@property (retain, nonatomic) NSData *maskValue;
@property (retain) NSDictionary *options;
@property (retain) NSArray *peers;
@property double updateTime;
@property long long nearbyScanMode;
@property _Bool advBuffer;
@property long long advBufferMode;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
