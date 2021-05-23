/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <NSObject.h>

@interface DMFApplicationInstallProgress : NSObject

{
    unsigned long long _state;
    unsigned long long _phase;
    double _fractionCompleted;
}

@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly) unsigned long long phase;
@property (nonatomic, readonly) double fractionCompleted;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(unsigned long long)arg1 phase:(unsigned long long)arg2 fractionCompleted:(double)arg3;

@end
