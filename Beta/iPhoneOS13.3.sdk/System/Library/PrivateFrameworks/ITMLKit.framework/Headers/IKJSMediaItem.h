/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKJSObject.h>

@class IKAppMediaItemBridge, NSArray, NSDictionary, NSNumber, NSString;

@interface IKJSMediaItem : IKJSObject

{
    NSNumber *_resumeTime;
    IKAppMediaItemBridge *_bridge;
}

@property (nonatomic, readonly) IKAppMediaItemBridge *bridge;
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

- (void)dealloc;
- (void)setRatingBadge:(id)arg1;
- (id)ratingBadge;
- (void)setContentProposalAutomaticAcceptanceInterval:(double)arg1;
- (double)contentProposalAutomaticAcceptanceInterval;
- (void)setContentProposalPresentationTime:(double)arg1;
- (double)contentProposalPresentationTime;
- (id)initWithType:(id)arg1:(id)arg2;
- (void)loadCertificateDataForURI:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)loadContentIdentifierDataForURI:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)loadKeyDataForURI:(id)arg1 requestData:(id)arg2 withCallback:(CDUnknownBlockType)arg3;

@end
