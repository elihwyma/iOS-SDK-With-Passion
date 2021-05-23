/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class PKPaymentDeviceMetadata;

@interface PKPaymentDeviceMetadataFetchTask : NSObject

{
    PKPaymentDeviceMetadata *_deviceMetadata;
    unsigned long long _remaningFields;
    unsigned long long _requestedFields;
    CDUnknownBlockType _completion;
}

@property (retain, nonatomic) PKPaymentDeviceMetadata *deviceMetadata;
@property (nonatomic) unsigned long long remaningFields;
@property (nonatomic) unsigned long long requestedFields;
@property (copy, nonatomic) CDUnknownBlockType completion;

@end
