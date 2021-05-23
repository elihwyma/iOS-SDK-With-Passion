/*
 Image: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@interface WPZoneTrackingRequest : NSObject

{
    unsigned char _clientType;
    _Bool _scanWhenScreenOff;
    NSMutableSet *_zones;
    CDStruct_9e3626a3 _scanningRates;
}

@property unsigned char clientType;
@property CDStruct_9e3626a3 scanningRates;
@property _Bool scanWhenScreenOff;
@property (retain) NSMutableSet *zones;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
