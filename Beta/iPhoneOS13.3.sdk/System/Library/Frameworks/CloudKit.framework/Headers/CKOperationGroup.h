/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKOperationConfiguration, CKOperationGroupSystemImposedInfo, NSNumber, NSString;

@interface CKOperationGroup : NSObject

{
    long long _expectedSendSize;
    long long _expectedReceiveSize;
    CKOperationConfiguration *_defaultConfiguration;
    NSString *_operationGroupID;
    NSString *_name;
    CKOperationGroupSystemImposedInfo *_systemImposedInfo;
    NSNumber *_quantityNumber;
    NSString *_authPromptReason;
}

@property (retain, nonatomic) CKOperationGroupSystemImposedInfo *systemImposedInfo;
@property (copy, nonatomic) NSNumber *quantityNumber;
@property (copy) NSString *authPromptReason;
@property (nonatomic, readonly) long long approximateSendBytes;
@property (nonatomic, readonly) long long approximateReceiveBytes;
@property (copy, nonatomic, readonly) NSString *operationGroupID;
@property (copy) CKOperationConfiguration *defaultConfiguration;
@property (copy) NSString *name;
@property unsigned long long quantity;
@property long long expectedSendSize;
@property long long expectedReceiveSize;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (long long)_approximateBytesForTransferSize:(long long)arg1;
- (unsigned long long)resolvedNetworkServiceTypeForConfig:(id)arg1;

@end
