/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class CLLocation, NSString;

@interface ARLocationData : NSObject <Swift>

{
    double _timestamp;
    CLLocation *_location;
}

@property (nonatomic, readonly) CLLocation *location;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) double timestamp;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setLocation:(id)arg1;
- (id)initWithLocation:(id)arg1;
- (id)encodeToDictionary;
- (id)encodeToMetadataWrapper;
- (id)initWithMetadataWrapper:(id)arg1;

@end
