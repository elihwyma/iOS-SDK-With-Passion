/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface SXAdRequest : NSObject

{
    _Bool _dynamicPlacement;
    NSString *_componentIdentifier;
    NSDictionary *_componentMetadata;
    unsigned long long _adType;
    NSDictionary *_campaignData;
    double _aspectRatioOfVideoPlayer;
    struct CGPoint _positionInArticle;
    struct CGSize _viewportSize;
    struct CGSize _contentSize;
}

@property (retain, nonatomic) NSString *componentIdentifier;
@property (retain, nonatomic) NSDictionary *componentMetadata;
@property (nonatomic) struct CGPoint positionInArticle;
@property (nonatomic) unsigned long long adType;
@property (nonatomic) struct CGSize viewportSize;
@property (nonatomic) struct CGSize contentSize;
@property (retain, nonatomic) NSDictionary *campaignData;
@property (nonatomic) _Bool dynamicPlacement;
@property (nonatomic) double aspectRatioOfVideoPlayer;

@end
