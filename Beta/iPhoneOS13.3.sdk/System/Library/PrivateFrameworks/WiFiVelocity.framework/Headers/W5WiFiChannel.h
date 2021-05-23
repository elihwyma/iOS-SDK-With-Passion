/*
 Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

#import <Foundation/NSObject.h>

@interface W5WiFiChannel : NSObject

{
    int _flags;
    long long _channel;
}

@property (nonatomic, readonly) long long channel;
@property (nonatomic, readonly) int flags;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToChannel:(id)arg1;
- (id)initWithChannel:(long long)arg1 flags:(int)arg2;

@end
