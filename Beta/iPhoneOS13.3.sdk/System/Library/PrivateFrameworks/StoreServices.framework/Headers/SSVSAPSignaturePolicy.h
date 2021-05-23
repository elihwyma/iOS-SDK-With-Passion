/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray;

@interface SSVSAPSignaturePolicy : NSObject

{
    long long _policyType;
    NSArray *_signatureComponents;
}

@property (nonatomic, readonly) long long policyType;
@property (copy, nonatomic, readonly) NSArray *signatureComponents;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPolicyType:(long long)arg1;
- (id)initWithSignedActionsDictionary:(id)arg1;
- (id)initWithPolicyType:(long long)arg1 signatureComponents:(id)arg2;
- (id)dataToSignWithURLResponse:(id)arg1 responseData:(id)arg2;
- (id)dataToSignWithURLRequest:(id)arg1;
- (id)_dataToSignWithDataSource:(id)arg1;
- (id)dataToSignWithRequestProperties:(id)arg1;

@end
