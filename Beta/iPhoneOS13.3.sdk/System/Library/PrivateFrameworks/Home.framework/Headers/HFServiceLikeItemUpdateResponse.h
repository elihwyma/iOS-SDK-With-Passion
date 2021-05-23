/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HFCharacteristicBatchReadResponse, HFCharacteristicValueDisplayMetadata, NSDictionary;

@interface HFServiceLikeItemUpdateResponse : NSObject

{
    HFCharacteristicValueDisplayMetadata *_displayMetadata;
    HFCharacteristicBatchReadResponse *_readResponse;
    NSDictionary *_standardResults;
}

@property (nonatomic, readonly) HFCharacteristicValueDisplayMetadata *displayMetadata;
@property (nonatomic, readonly) HFCharacteristicBatchReadResponse *readResponse;
@property (nonatomic, readonly) NSDictionary *standardResults;

- (id)initWithDisplayMetadata:(id)arg1 readResponse:(id)arg2 standardResults:(id)arg3;

@end
