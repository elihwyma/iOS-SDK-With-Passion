//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIPageComponent.h>

@class SKUILink;

__attribute__((visibility("hidden")))
@interface SKUIAccountButtonsComponent : SKUIPageComponent
{
    SKUILink *_ecommerceLink;
    BOOL _hidesTermsAndConditions;
}

@property(nonatomic) BOOL hidesTermsAndConditions; // @synthesize hidesTermsAndConditions=_hidesTermsAndConditions;
@property(retain, nonatomic) SKUILink *ECommerceLink; // @synthesize ECommerceLink=_ecommerceLink;
// - (void).cxx_destruct;
- (long long)componentType;
- (id)initWithViewElement:(id)arg1;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2;
- (id)initWithCustomPageContext:(id)arg1;

@end

