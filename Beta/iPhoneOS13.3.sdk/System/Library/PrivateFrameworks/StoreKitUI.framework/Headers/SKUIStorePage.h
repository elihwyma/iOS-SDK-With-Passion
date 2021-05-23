/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSArray, NSData, NSHTTPURLResponse, NSMutableDictionary, NSString, NSURL, SKUIArtwork, SKUIProductPage, SKUIUber, SSMetricsConfiguration;

@interface SKUIStorePage : NSObject <Swift>

{
    SKUIArtwork *_backgroundArtwork;
    NSData *_itmlData;
    NSHTTPURLResponse *_itmlResponse;
    SSMetricsConfiguration *_metricsConfiguration;
    NSString *_metricsPageDescription;
    NSArray *_pageComponents;
    NSString *_pageType;
    NSURL *_pageURL;
    SKUIProductPage *_productPage;
    NSString *_title;
    SKUIUber *_uber;
    NSMutableDictionary *_values;
}

@property (retain, nonatomic) SKUIArtwork *backgroundArtwork;
@property (retain, nonatomic) NSData *ITMLData;
@property (retain, nonatomic) NSHTTPURLResponse *ITMLResponse;
@property (retain, nonatomic) SSMetricsConfiguration *metricsConfiguration;
@property (copy, nonatomic) NSString *metricsPageDescription;
@property (copy, nonatomic) NSArray *pageComponents;
@property (copy, nonatomic) NSString *pageType;
@property (copy, nonatomic) NSURL *pageURL;
@property (copy, nonatomic) SKUIProductPage *productPage;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) SKUIUber *uber;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setValue:(id)arg1 forPageKey:(id)arg2;
- (id)valueForPageKey:(id)arg1;

@end
