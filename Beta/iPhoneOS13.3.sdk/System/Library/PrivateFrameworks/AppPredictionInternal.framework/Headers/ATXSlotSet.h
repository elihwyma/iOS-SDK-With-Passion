/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSSet, NSUUID;

@interface ATXSlotSet : NSObject

{
    unsigned int _hash;
    NSSet *_parameters;
    NSUUID *_uuid;
}

@property (nonatomic, readonly) NSSet *parameters;
@property (retain, nonatomic) NSUUID *uuid;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithParameters:(id)arg1;
- (id)initWithParameters:(id)arg1 uuid:(id)arg2;
- (id)initWithOpaqueParameters;
- (id)initWithOpaqueParametersUuid:(id)arg1;
- (_Bool)isEqualToSlotSet:(id)arg1;

@end
