/*
 Image: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
 */

#import <Foundation/NSObject.h>

#import <FindMyDevice/Swift-Protocol.h>

@class NSString;

@interface FMDEmergencyCallInfoPublisherConfiguration : NSObject <Swift>

{
    NSString *_serverHost;
}

@property (copy, nonatomic) NSString *serverHost;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
