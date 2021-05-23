/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSDictionary;

@interface PKMerchantCategoryCodeMap : NSObject

{
    NSDictionary *_mccCodeToMerchantCategory;
}

- (id)init;
- (long long)categoryForIndustryCode:(long long)arg1;

@end
