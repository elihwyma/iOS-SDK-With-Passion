/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

@interface ARAnchor : NSObject

{
    NSUUID *_identifier;
    NSString *_name;
    NSUUID *_sessionIdentifier;
    double _lastUpdateTimestamp;
    CDStruct_14d5dc5e _transform;
    CDStruct_14d5dc5e _referenceTransform;
}

@property (retain, nonatomic) NSUUID *sessionIdentifier;
@property (nonatomic) CDStruct_14d5dc5e transform;
@property (nonatomic) CDStruct_14d5dc5e referenceTransform;
@property (nonatomic) double lastUpdateTimestamp;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSString *name;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransform:(CDStruct_14d5dc5e)arg1;
- (id)initWithAnchor:(id)arg1;
- (id)debugQuickLookObject;
- (id)_description:(_Bool)arg1;
- (_Bool)isEqualToAnchor:(id)arg1;
- (id)initWithName:(id)arg1 transform:(CDStruct_14d5dc5e)arg2;
- (id)initWithIdentifier:(id)arg1 transform:(CDStruct_14d5dc5e)arg2;

@end
