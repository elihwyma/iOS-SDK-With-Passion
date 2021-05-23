/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL, UIImage;

@protocol SKUIArtworkProviding;

__attribute__((visibility("hidden")))
@interface SKUIRedeem : NSObject <Swift>

{
    _Bool _hideItemView;
    NSArray *_items;
    NSArray *_downloads;
    NSString *_inAppPurchase;
    NSString *_credit;
    NSString *_balance;
    NSString *_creditDisplay;
    NSDictionary *_thankYouDictionary;
    NSURL *_redirectURL;
    NSURL *_customizedThankyouURL;
    UIImage *_headerImage;
    id <SKUIArtworkProviding> _headerArtworkProvider;
    NSString *_title;
    NSString *_message;
    NSArray *_links;
    double _ITunesPassLearnMoreAlertInterval;
}

@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSArray *downloads;
@property (retain, nonatomic) NSString *inAppPurchase;
@property (copy, nonatomic) NSString *credit;
@property (copy, nonatomic) NSString *balance;
@property (copy, nonatomic) NSString *creditDisplay;
@property (retain, nonatomic) NSDictionary *thankYouDictionary;
@property (retain, nonatomic) NSURL *redirectURL;
@property (retain, nonatomic) NSURL *customizedThankyouURL;
@property (retain, nonatomic) UIImage *headerImage;
@property (retain, nonatomic) id <SKUIArtworkProviding> headerArtworkProvider;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) NSArray *links;
@property (nonatomic) _Bool hideItemView;
@property (nonatomic) double ITunesPassLearnMoreAlertInterval;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
