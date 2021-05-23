/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ARGyroscopeData : NSObject

{
    double _timestamp;
    CDStruct_31142d93 _rotationRate;
}

@property (nonatomic) double timestamp;
@property (nonatomic) CDStruct_31142d93 rotationRate;
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
