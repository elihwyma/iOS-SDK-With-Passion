/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, TPSExperiment;

@interface TPSAnalyticsProcessingController : NSObject

{
    NSArray *_processors;
    NSArray *_allTipStatus;
    NSDictionary *_deliveryInfoMap;
    NSDictionary *_eventHistoryMap;
    TPSExperiment *_experiment;
}

- (id)allTipStatus;
- (id)allDeliveryInfo;
- (id)deliveryEventForIdentifier:(id)arg1;
- (id)deliveryInfoForIdentifier:(id)arg1;
- (id)experiment;
- (id)initWithAllTipStatus:(id)arg1 deliveryInfoMap:(id)arg2 eventHistoryMap:(id)arg3 experiment:(id)arg4 processors:(id)arg5;
- (id)initWithAllTipStatus:(id)arg1 deliveryInfoMap:(id)arg2 eventHistoryMap:(id)arg3 experiment:(id)arg4;
- (void)processAnalytics;

@end
