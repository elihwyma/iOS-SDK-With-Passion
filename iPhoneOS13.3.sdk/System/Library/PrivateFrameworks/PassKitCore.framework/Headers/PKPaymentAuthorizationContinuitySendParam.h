//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class PKRemotePaymentRequest;

@interface PKPaymentAuthorizationContinuitySendParam : PKPaymentAuthorizationStateParam
{
    PKRemotePaymentRequest *_remotePaymentRequest;
}

+ (id)paramWithRemotePaymentRequest:(id)arg1;
@property(retain, nonatomic) PKRemotePaymentRequest *remotePaymentRequest; // @synthesize remotePaymentRequest=_remotePaymentRequest;
// - (void).cxx_destruct;

@end

