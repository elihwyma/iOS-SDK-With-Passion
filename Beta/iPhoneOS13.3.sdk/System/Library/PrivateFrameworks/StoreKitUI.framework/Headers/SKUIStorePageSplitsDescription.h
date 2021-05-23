/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class SKUIStorePageSplit;

__attribute__((visibility("hidden")))
@interface SKUIStorePageSplitsDescription : NSObject <Swift>

{
    SKUIStorePageSplit *_bottomSplit;
    SKUIStorePageSplit *_leftSplit;
    SKUIStorePageSplit *_rightSplit;
    SKUIStorePageSplit *_topSplit;
}

@property (copy, nonatomic) SKUIStorePageSplit *bottomSplit;
@property (copy, nonatomic) SKUIStorePageSplit *leftSplit;
@property (copy, nonatomic) SKUIStorePageSplit *rightSplit;
@property (copy, nonatomic) SKUIStorePageSplit *topSplit;
@property (nonatomic, readonly) SKUIStorePageSplit *firstSplit;
@property (nonatomic, readonly) long long numberOfSplits;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerateSplitsUsingBlock:(CDUnknownBlockType)arg1;
- (void)sizeSplitsToFitWidth:(double)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end
