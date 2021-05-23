/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/Swift-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@protocol IKJSMediaItem <Swift>

@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *externalID;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *description;
@property (retain, nonatomic) NSString *contentRatingDomain;
@property (retain, nonatomic) NSNumber *contentRatingRanking;
@property (retain, nonatomic) NSString *artworkImageURL;
@property (retain, nonatomic) NSString *artworkImageSrcset;
@property (nonatomic) _Bool isExplicit;
@property (retain, nonatomic) NSNumber *resumeTime;
@property (retain, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) NSArray *interstitials;
@property (retain, nonatomic) NSArray *highlightGroups;

- (unsigned short)initWithType:: /* Error: Ran out of types for this method. */;

@end
