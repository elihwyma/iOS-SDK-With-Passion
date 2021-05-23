/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

#import <Email/Swift-Protocol.h>

@class NSError;

@interface EMMessageDeliveryResult : NSObject <Swift>

{
    long long _status;
    NSError *_error;
}

@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) NSError *error;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatus:(long long)arg1 error:(id)arg2;

@end
