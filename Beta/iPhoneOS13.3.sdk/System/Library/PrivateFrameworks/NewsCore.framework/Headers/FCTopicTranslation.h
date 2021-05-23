/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString, NTPBArticleTopic;

@interface FCTopicTranslation : NSObject

{
    _Bool _isHidden;
    _Bool _isEligibleForGrouping;
    _Bool _isEligibleForGroupingIfFavorited;
    NSString *_tagID;
    NTPBArticleTopic *_articleTopic;
}

@property (retain, nonatomic) NTPBArticleTopic *articleTopic;
@property (retain, nonatomic) NSString *tagID;
@property (nonatomic) _Bool isHidden;
@property (nonatomic) _Bool isEligibleForGrouping;
@property (nonatomic) _Bool isEligibleForGroupingIfFavorited;

- (id)init;
- (id)description;
- (id)initWithTagID:(id)arg1;
- (id)initWithLanguageBucket:(id)arg1;

@end
