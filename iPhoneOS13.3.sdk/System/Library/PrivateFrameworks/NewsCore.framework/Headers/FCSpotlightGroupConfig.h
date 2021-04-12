//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCGroupConfig.h>

@class NSDate, NSString;
@protocol FCCardStyleProviding;

@interface FCSpotlightGroupConfig : FCGroupConfig
{
    NSString *_spotlightArticleID;
    NSDate *_publishDate;
}

@property(readonly, copy, nonatomic) NSDate *publishDate; // @synthesize publishDate=_publishDate;
@property(readonly, copy, nonatomic) NSString *spotlightArticleID; // @synthesize spotlightArticleID=_spotlightArticleID;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) id <FCCardStyleProviding> spotlightItemDarkStyle;
@property(readonly, copy, nonatomic) id <FCCardStyleProviding> spotlightItemStyle;
@property(readonly, copy, nonatomic) NSString *spotlightEyebrowTitle;
@property(readonly, copy, nonatomic) NSString *spotlightCallToActionTitle;
- (id)initWithDictionary:(id)arg1;

@end

