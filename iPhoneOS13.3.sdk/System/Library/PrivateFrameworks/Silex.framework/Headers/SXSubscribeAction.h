//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXSubscribeAction-Protocol.h>

@class NSString;
@protocol SXAction;

@interface SXSubscribeAction : NSObject <SXSubscribeAction>
{
    id <SXAction> postPurchaseAction;
}

@property(readonly, nonatomic) id <SXAction> postPurchaseAction; // @synthesize postPurchaseAction;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSString *type;

@end
