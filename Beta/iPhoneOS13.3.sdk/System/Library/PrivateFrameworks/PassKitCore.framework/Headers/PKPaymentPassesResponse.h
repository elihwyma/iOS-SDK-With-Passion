/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSArray, NSString;

@interface PKPaymentPassesResponse

{
    NSArray *_passURLs;
    NSString *_lastUpdatedTag;
    NSArray *_devicePassSerialNumbers;
}

@property (copy, nonatomic) NSArray *passURLs;
@property (copy, nonatomic) NSArray *devicePassSerialNumbers;
@property (copy, nonatomic) NSString *lastUpdatedTag;

- (id)initWithData:(id)arg1;

@end
