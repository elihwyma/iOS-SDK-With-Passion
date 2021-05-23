/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <Foundation/NSObject.h>

@class AAUIServerHookResponse, AKAppleIDServerUIDataHarvester, NSString;

@protocol AAUIServerHookDelegate;

@interface AAUIAuthKitRecoveryHook : NSObject

{
    id <AAUIServerHookDelegate> _delegate;
    AAUIServerHookResponse *_serverHookResponse;
    AKAppleIDServerUIDataHarvester *_serverDataHarvester;
}

@property (retain, nonatomic) AKAppleIDServerUIDataHarvester *serverDataHarvester;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) AAUIServerHookResponse *serverHookResponse;
@property (weak, nonatomic) id <AAUIServerHookDelegate> delegate;

- (_Bool)shouldMatchElement:(id)arg1;
- (_Bool)shouldMatchModel:(id)arg1;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)processObjectModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)harvestDataFromResponse:(id)arg1;
- (id)_cdpStateUIProvider;

@end
