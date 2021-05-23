/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface PKPaymentSetupBrowseProductsModel : NSObject

{
    NSArray *_products;
    NSArray *_likelyFilteredProducts;
    NSArray *_unlikelyFilteredProducts;
    NSString *_filterString;
    unsigned long long _filterType;
    NSArray *_likelyProductIdentifiers;
}

@property (copy, nonatomic) NSString *filterString;
@property (nonatomic) unsigned long long filterType;
@property (copy, nonatomic) NSArray *likelyProductIdentifiers;
@property (copy, nonatomic, readonly) NSArray *likelyProducts;
@property (copy, nonatomic, readonly) NSArray *unlikelyProducts;
@property (copy, nonatomic, readonly) NSArray *unifiedProducts;

- (void)_updatedFilteredProducts;
- (unsigned long long)numberOfLikelyProducts;
- (unsigned long long)numberOfUnlikelyProducts;
- (id)initWithProducts:(id)arg1;
- (unsigned long long)unfilteredCountForType:(unsigned long long)arg1;
- (id)likelyProductAtIndex:(unsigned long long)arg1;
- (id)unlikelyProductAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfUnifiedProducts;
- (id)unifiedProductAtIndex:(unsigned long long)arg1;

@end
