/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

#import <NSObject.h>

@class NSArray;

@interface DNDState : NSObject

{
    unsigned long long _suppressionState;
    NSArray *_activeModeAssertionMetadata;
}

@property (nonatomic, readonly) _Bool willSuppressInterruptions;
@property (copy, nonatomic, readonly) NSArray *activeModeIdentifiers;
@property (nonatomic, readonly) unsigned long long suppressionState;
@property (copy, nonatomic, readonly) NSArray *activeModeAssertionMetadata;
@property (nonatomic, readonly, getter=isActive) _Bool active;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuppressionState:(unsigned long long)arg1 activeModeAssertionMetadata:(id)arg2;

@end
