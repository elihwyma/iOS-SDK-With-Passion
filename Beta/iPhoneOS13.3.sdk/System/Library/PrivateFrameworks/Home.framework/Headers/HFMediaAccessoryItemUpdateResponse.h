/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HFCharacteristicValueDisplayMetadata, NSDictionary;

@interface HFMediaAccessoryItemUpdateResponse : NSObject

{
    HFCharacteristicValueDisplayMetadata *_displayMetadata;
    NSDictionary *_standardResults;
}

@property (nonatomic, readonly) HFCharacteristicValueDisplayMetadata *displayMetadata;
@property (nonatomic, readonly) NSDictionary *standardResults;

- (id)initWithDisplayMetadata:(id)arg1 standardResults:(id)arg2;

@end
