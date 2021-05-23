/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@interface PKPaymentBackgroundDownloadRecord : NSObject <Swift>

{
    long long _taskType;
    long long _retryCount;
}

@property (nonatomic) long long taskType;
@property (nonatomic) long long retryCount;

+ (_Bool)supportsSecureCoding;
+ (id)taskWithType:(long long)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
