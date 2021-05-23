/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSArray, NSData, NSHTTPURLResponse, NSString, NSURL, SKUIProductPageItem, SKUIProductPageProductInfo, SKUIReviewConfiguration, SKUIUber, SSMetricsConfiguration;

@interface SKUIProductPage : NSObject <Swift>

{
    long long _defaultPageFragment;
    SKUIProductPageItem *_item;
    NSData *_itmlData;
    NSHTTPURLResponse *_itmlResponse;
    SSMetricsConfiguration *_metricsConfiguration;
    NSString *_metricsPageDescription;
    NSURL *_pageURL;
    SKUIProductPageProductInfo *_productInformation;
    NSArray *_relatedContentSwooshes;
    SKUIReviewConfiguration *_reviewConfiguration;
    SKUIUber *_uber;
}

@property (nonatomic) long long defaultPageFragment;
@property (retain, nonatomic) SKUIProductPageItem *item;
@property (retain, nonatomic) NSData *ITMLData;
@property (retain, nonatomic) NSHTTPURLResponse *ITMLResponse;
@property (retain, nonatomic) SSMetricsConfiguration *metricsConfiguration;
@property (copy, nonatomic) NSString *metricsPageDescription;
@property (copy, nonatomic) NSURL *pageURL;
@property (retain, nonatomic) SKUIProductPageProductInfo *productInformation;
@property (copy, nonatomic) NSArray *relatedContentSwooshes;
@property (retain, nonatomic) SKUIReviewConfiguration *reviewConfiguration;
@property (retain, nonatomic) SKUIUber *uber;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
