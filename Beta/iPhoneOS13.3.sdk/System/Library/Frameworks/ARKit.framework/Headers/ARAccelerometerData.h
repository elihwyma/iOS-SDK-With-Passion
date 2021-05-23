/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ARAccelerometerData : NSObject

{
    double _timestamp;
    double _temperature;
    CDStruct_31142d93 _acceleration;
}

@property (nonatomic) double timestamp;
@property (nonatomic) CDStruct_31142d93 acceleration;
@property (nonatomic) double temperature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)encodeToDictionary;
- (id)encodeToMetadataWrapper;
- (id)initWithMetadataWrapper:(id)arg1;

@end
