/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKAppContext, IKJSMediaItem, NSArray, NSDictionary, NSNumber, NSString;

@protocol IKAppMediaItem;

@interface IKAppMediaItemBridge : NSObject

{
    NSString *_artworkImageURL;
    NSString *_artworkImageSrcset;
    id <IKAppMediaItem> _appMediaItem;
    IKAppContext *_appContext;
    IKJSMediaItem *_jsMediaItem;
}

@property (weak, nonatomic, readonly) IKAppContext *appContext;
@property (weak, nonatomic, readonly) IKJSMediaItem *jsMediaItem;
@property (retain, nonatomic) NSString *externalID;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *description;
@property (retain, nonatomic) NSString *contentRatingDomain;
@property (retain, nonatomic) NSNumber *contentRatingRanking;
@property (retain, nonatomic) NSString *artworkImageURL;
@property (retain, nonatomic) NSString *artworkImageSrcset;
@property (retain, nonatomic) NSString *ratingBadge;
@property (nonatomic) _Bool isExplicit;
@property (retain, nonatomic) NSNumber *resumeTime;
@property (retain, nonatomic) NSArray *interstitials;
@property (retain, nonatomic) NSArray *chapterGroups;
@property (retain, nonatomic) NSDictionary *extraMetadata;
@property (nonatomic) double contentProposalPresentationTime;
@property (nonatomic) double contentProposalAutomaticAcceptanceInterval;
@property (weak, nonatomic, readonly) id <IKAppMediaItem> appMediaItem;

- (void)cleanup;
- (void)_evaluateDelegateBlockSync:(CDUnknownBlockType)arg1;
- (id)initWithAppContext:(id)arg1 jsMediaItem:(id)arg2;
- (void)_resolveArtworkImageURL;
- (void)prepareForLoadingWithCallback:(CDUnknownBlockType)arg1;
- (void)loadCertificateDataForURL:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)loadContentIdentifierDataForURL:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)loadKeyDataForURL:(id)arg1 keyRequestData:(id)arg2 withCallback:(CDUnknownBlockType)arg3;

@end
