/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString, NUAdBannerView;

@interface NUVideoAdMetadata : NSObject

{
    NUAdBannerView *_bannerView;
    NSString *_adCampaign;
    NSString *_adLine;
    NSString *_adCreative;
    NSString *_impressionIdentifier;
    double _duration;
    double _timePlayed;
    unsigned long long _position;
    double _impressionThreshold;
}

@property (retain, nonatomic) NUAdBannerView *bannerView;
@property (copy, nonatomic) NSString *adCampaign;
@property (copy, nonatomic) NSString *adLine;
@property (copy, nonatomic) NSString *adCreative;
@property (copy, nonatomic) NSString *impressionIdentifier;
@property (nonatomic) double duration;
@property (nonatomic) double timePlayed;
@property (nonatomic) unsigned long long position;
@property (nonatomic) double impressionThreshold;

@end
