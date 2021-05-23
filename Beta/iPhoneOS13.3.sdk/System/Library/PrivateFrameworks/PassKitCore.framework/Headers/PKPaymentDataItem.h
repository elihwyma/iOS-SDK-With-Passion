/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSArray, NSString, PKPaymentAuthorizationDataModel;

@interface PKPaymentDataItem : NSObject

{
    long long _type;
    long long _status;
    PKPaymentAuthorizationDataModel *_model;
}

@property (weak, nonatomic) PKPaymentAuthorizationDataModel *model;
@property (nonatomic) long long type;
@property (nonatomic) long long status;
@property (nonatomic, readonly, getter=isRejected) _Bool rejected;
@property (nonatomic, readonly) NSArray *errors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)dataType;
+ (_Bool)supportsMultipleItems;

- (id)initWithModel:(id)arg1;
- (_Bool)isValidWithError:(id *)arg1;

@end
