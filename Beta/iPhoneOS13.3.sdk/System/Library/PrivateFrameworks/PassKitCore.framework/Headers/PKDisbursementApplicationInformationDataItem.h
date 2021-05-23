/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentDataItem.h>

@class PKDisbursementApplicationInformation;

@interface PKDisbursementApplicationInformationDataItem : PKPaymentDataItem

{
    PKDisbursementApplicationInformation *_applicationInformation;
}

@property (retain, nonatomic) PKDisbursementApplicationInformation *applicationInformation;

+ (long long)dataType;

- (id)initWithModel:(id)arg1;
- (_Bool)isValidWithError:(id *)arg1;

@end
