/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSDictionary;

@interface CKOperationGroupSystemImposedInfo : NSObject

{
    NSDictionary *_networkServiceTypePerConfig;
    long long _expectedSendSize;
    long long _expectedReceiveSize;
}

@property (retain, nonatomic) NSDictionary *networkServiceTypePerConfig;
@property (nonatomic) long long expectedSendSize;
@property (nonatomic) long long expectedReceiveSize;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
