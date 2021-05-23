/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface SiriUILockStateTransport : NSObject

{
    NSNumber *_transport;
}

@property (retain, nonatomic) NSNumber *transport;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)SiriUILockState;
- (id)initWithSiriUILockState:(unsigned long long)arg1;

@end
