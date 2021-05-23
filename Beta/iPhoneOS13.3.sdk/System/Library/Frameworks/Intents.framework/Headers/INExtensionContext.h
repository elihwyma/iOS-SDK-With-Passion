/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, NSUUID;

@interface INExtensionContext : NSObject <Swift>

{
    NSString *_recordRoute;
    NSUUID *_recordDeviceUID;
    NSString *_recordDeviceIdentifier;
    NSArray *_airPlayRouteIdentifiers;
}

@property (copy, nonatomic, setter=_setRecordRoute:) NSString *_recordRoute;
@property (copy, nonatomic, setter=_setRecordDeviceUID:) NSUUID *_recordDeviceUID;
@property (copy, nonatomic, setter=_setRecordDeviceIdentifier:) NSString *_recordDeviceIdentifier;
@property (copy, nonatomic, setter=_setAirPlayRouteIdentifiers:) NSArray *_airPlayRouteIdentifiers;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
