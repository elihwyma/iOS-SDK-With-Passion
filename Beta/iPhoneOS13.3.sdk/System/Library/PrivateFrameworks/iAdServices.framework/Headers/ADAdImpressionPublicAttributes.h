/*
 Image: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface ADAdImpressionPublicAttributes : NSObject

{
    _Bool _unbranded;
    _Bool _hasAction;
    _Bool _requiresMRAID;
    _Bool _adLibManagedVideo;
    NSString *_batchResponseIdentifier;
    NSString *_accessibilityLabel;
    double _skipThreshold;
    double _minimumIntervalBetweenPresentations;
    NSArray *_videoAssets;
    NSDictionary *_mediaAsset;
    NSString *_uniqueIdentifier;
    NSArray *_adSpecCreativeSizes;
    NSURL *_audioURL;
    NSURL *_staticImageURL;
    NSURL *_logoImageURL;
    NSString *_headlineForLCD;
    NSString *_descriptionForLCD;
    NSArray *_nativeMetadata;
    NSDictionary *_transparencyDetails;
    NSDictionary *_nativeMediaCreativeMetadata;
    double _portraitWidth;
    double _portraitHeight;
    double _landscapeWidth;
    double _landscapeHeight;
    NSURL *_contentURL;
    NSString *_contentString;
    double _containerWidth;
    double _containerHeight;
    long long _maximumPretapRequestCount;
    NSArray *_matchClauses;
    NSArray *_excludeTags;
    long long _adPrivacyMarkPosition;
}

@property (nonatomic) _Bool unbranded;
@property (copy, nonatomic) NSString *batchResponseIdentifier;
@property (copy, nonatomic) NSString *accessibilityLabel;
@property (nonatomic) double skipThreshold;
@property (nonatomic) double minimumIntervalBetweenPresentations;
@property (retain, nonatomic) NSArray *videoAssets;
@property (retain, nonatomic) NSDictionary *mediaAsset;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (retain, nonatomic) NSArray *adSpecCreativeSizes;
@property (nonatomic) _Bool hasAction;
@property (retain, nonatomic) NSURL *audioURL;
@property (retain, nonatomic) NSURL *staticImageURL;
@property (retain, nonatomic) NSURL *logoImageURL;
@property (copy, nonatomic) NSString *headlineForLCD;
@property (copy, nonatomic) NSString *descriptionForLCD;
@property (retain, nonatomic) NSArray *nativeMetadata;
@property (retain, nonatomic) NSDictionary *transparencyDetails;
@property (retain, nonatomic) NSDictionary *nativeMediaCreativeMetadata;
@property (nonatomic) double portraitWidth;
@property (nonatomic) double portraitHeight;
@property (nonatomic) double landscapeWidth;
@property (nonatomic) double landscapeHeight;
@property (retain, nonatomic) NSURL *contentURL;
@property (retain, nonatomic) NSString *contentString;
@property (nonatomic) double containerWidth;
@property (nonatomic) double containerHeight;
@property (nonatomic) _Bool requiresMRAID;
@property (nonatomic) long long maximumPretapRequestCount;
@property (nonatomic) _Bool adLibManagedVideo;
@property (retain, nonatomic) NSArray *matchClauses;
@property (retain, nonatomic) NSArray *excludeTags;
@property (nonatomic) long long adPrivacyMarkPosition;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
