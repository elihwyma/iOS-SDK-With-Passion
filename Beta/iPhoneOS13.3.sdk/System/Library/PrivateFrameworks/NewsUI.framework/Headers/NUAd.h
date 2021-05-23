/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

#import <NewsUI/Swift-Protocol.h>

@class NSDate, NSString, NUAdBannerView;

@interface NUAd : NSObject <Swift>

{
    NSString *_identifier;
    NUAdBannerView *_bannerView;
    NSString *_opportunityIdentifier;
    NSDate *_creationDate;
    NSDate *_loadDate;
    NSDate *_unloadDate;
    unsigned long long _state;
}

@property (copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) NUAdBannerView *bannerView;
@property (nonatomic, readonly) NSString *opportunityIdentifier;
@property (nonatomic, readonly) NSDate *creationDate;
@property (retain, nonatomic) NSDate *loadDate;
@property (retain, nonatomic) NSDate *unloadDate;
@property (nonatomic) unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)adContextValueForKeyPath:(id)arg1;
- (id)initWithBanner:(id)arg1 identifier:(id)arg2;

@end
