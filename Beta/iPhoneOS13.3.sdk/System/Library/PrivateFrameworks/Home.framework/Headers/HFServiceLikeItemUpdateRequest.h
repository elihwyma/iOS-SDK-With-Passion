/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HMAccessory, HMService, NSSet;

@protocol HFCharacteristicValueSource;

@interface HFServiceLikeItemUpdateRequest : NSObject

{
    HMAccessory *_accessory;
    HMService *_service;
    id <HFCharacteristicValueSource> _valueSource;
    NSSet *_characteristics;
}

@property (retain, nonatomic) HMAccessory *accessory;
@property (retain, nonatomic) HMService *service;
@property (retain, nonatomic) id <HFCharacteristicValueSource> valueSource;
@property (retain, nonatomic) NSSet *characteristics;

- (id)init;
- (id)initWithAccessory:(id)arg1 valueSource:(id)arg2 characteristics:(id)arg3;
- (id)updateWithOptions:(id)arg1;
- (id)initWithService:(id)arg1 valueSource:(id)arg2 characteristics:(id)arg3;
- (id)_displayMetadataForReadResponse:(id)arg1;
- (id)_standardResultsForReadResponse:(id)arg1 displayMetadata:(id)arg2 batteryLevelResults:(id)arg3 updateOptions:(id)arg4;

@end
