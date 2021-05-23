/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface AKAppleIDServerUIDataHarvester : NSObject

{
    NSMutableDictionary *_harvestedData;
}

@property (copy, nonatomic, readonly) NSDictionary *harvestedData;

- (id)init;
- (void)harvestDataFromServerHTTPResponse:(id)arg1;
- (void)_harvestDataFromClientInfo:(id)arg1 withExtractor:(id)arg2;
- (void)harvestIDMSRecoveryInfoFromClientInfo:(id)arg1;
- (void)_harvestIDMSRecoveryHeadersInfo:(id)arg1;
- (void)harvestIDMSRecoveryInfoFromHeaders:(id)arg1;
- (void)harvestDataFromServerUIObjectModel:(id)arg1;
- (void)harvestDataFromCompanionResponse:(id)arg1;

@end
