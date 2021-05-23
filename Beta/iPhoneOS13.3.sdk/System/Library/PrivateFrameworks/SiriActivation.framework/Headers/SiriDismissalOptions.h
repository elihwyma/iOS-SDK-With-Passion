/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <Foundation/NSObject.h>

@interface SiriDismissalOptions : NSObject

{
    _Bool _animated;
    unsigned long long _deactivationOptions;
    long long _reason;
}

@property (nonatomic, readonly) unsigned long long deactivationOptions;
@property (nonatomic, readonly) _Bool animated;
@property (nonatomic, readonly) long long reason;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeactivationOptions:(unsigned long long)arg1 animated:(_Bool)arg2;
- (id)initWithDeactivationOptions:(unsigned long long)arg1;
- (id)initWithDeactivationOptions:(unsigned long long)arg1 animated:(_Bool)arg2 requestCancellationReason:(long long)arg3;

@end
