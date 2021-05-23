/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface AMSMediaToken : NSObject

{
    _Bool _valid;
    NSDate *_expirationDate;
    double _lifetime;
    NSString *_tokenString;
}

@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) double lifetime;
@property (nonatomic, readonly) NSString *tokenString;
@property (nonatomic, readonly, getter=isValid) _Bool valid;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isExpired;
- (id)initWithString:(id)arg1 expirationDate:(id)arg2 lifetime:(double)arg3 valid:(_Bool)arg4;
- (id)initWithString:(id)arg1 expirationDate:(id)arg2 lifetime:(double)arg3;
- (id)invalidCopy;
- (double)percentageOfLifetimeRemaining;
- (_Bool)willExpireWithin:(double)arg1;

@end
