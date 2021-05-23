/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKDiscoveryTrigger.h>

#import <PassKitCore/Swift-Protocol.h>

@interface PKDiscoveryLocationTrigger : PKDiscoveryTrigger <Swift>

{
    double _longitude;
    double _latitude;
    double _radius;
}

@property (nonatomic, readonly) double longitude;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double radius;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
