/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString, NSURL, _TVSecureKeyLoader;

@interface TVMediaItem : NSObject

{
    _Bool _containsExplicitContent;
    _TVSecureKeyLoader *secureKeyLoader;
    NSString *_type;
    NSURL *_url;
    NSString *_title;
    NSString *_subtitle;
    NSString *_itemDescription;
    NSString *_contentRatingDomain;
    NSNumber *_contentRatingRanking;
    NSURL *_artworkImageURL;
    double _resumeTime;
    NSArray *_interstitials;
    NSArray *_highlightGroups;
    NSDictionary *_userInfo;
    NSString *_contentRating;
    double _contentProposalPresentationTime;
    double _contentProposalAutomaticAcceptanceInterval;
    double _playbackProgress;
    NSString *_externalIdentifier;
    NSString *_externalProfileIdentifier;
    NSString *_externalServiceIdentifier;
}

@property (retain, nonatomic) _TVSecureKeyLoader *secureKeyLoader;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *itemDescription;
@property (retain, nonatomic) NSString *contentRatingDomain;
@property (retain, nonatomic) NSNumber *contentRatingRanking;
@property (retain, nonatomic) NSURL *artworkImageURL;
@property (nonatomic) _Bool containsExplicitContent;
@property (nonatomic) double resumeTime;
@property (retain, nonatomic) NSArray *interstitials;
@property (retain, nonatomic) NSArray *highlightGroups;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSString *contentRating;
@property (nonatomic) double contentProposalPresentationTime;
@property (nonatomic) double contentProposalAutomaticAcceptanceInterval;
@property (nonatomic) double playbackProgress;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSString *externalProfileIdentifier;
@property (copy, nonatomic) NSString *externalServiceIdentifier;

@end
