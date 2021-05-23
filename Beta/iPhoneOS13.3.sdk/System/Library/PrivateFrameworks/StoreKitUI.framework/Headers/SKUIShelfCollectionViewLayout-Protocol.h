/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/Swift-Protocol.h>

@class SKUIShelfLayoutData;

@protocol SKUIShelfCollectionViewLayout <Swift>

@property (retain, nonatomic) SKUIShelfLayoutData *layoutData;

+ (unsigned short)snapToBoundariesDecelerationRate;
+ (unsigned short)collectionViewCanClipToBounds;

@end
