/*
 Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

#import <SearchFoundation/SFSearchResult.h>

@class MISSING_TYPE, NSData, NSDate, NSMutableArray, NSNumber, NSString, PRSRankingItem, SFPunchout;

@interface SFSearchResult_SpotlightExtras : SFSearchResult

{
    SFPunchout *_cachedPunchout;
    _Bool _hasCommunicationContent;
    float _l2score;
    unsigned int _feedbackBlockId;
    NSString *_protectionClass;
    NSNumber *_fileIdentifier;
    NSNumber *_parentFileIdentifier;
    NSString *_filename;
    NSNumber *_documentIdentifier;
    NSString *_launchString;
    NSDate *_lastUsedDate;
    NSString *_userActivityType;
    NSMutableArray *_duplicatedItems;
    NSString *_contentURL;
    PRSRankingItem *_rankingItem;
    NSData *_suggestionsFeedbackData;
    unsigned long long _predictionsFeedbackActionType;
    MISSING_TYPE *_score;
}

@property (retain, nonatomic) NSString *protectionClass;
@property (retain, nonatomic) NSNumber *fileIdentifier;
@property (retain, nonatomic) NSNumber *parentFileIdentifier;
@property (retain, nonatomic) NSString *filename;
@property (retain, nonatomic) NSNumber *documentIdentifier;
@property (nonatomic) MISSING_TYPE *score;
@property (nonatomic) float l2score;
@property (retain, nonatomic) NSString *launchString;
@property (retain, nonatomic) NSDate *lastUsedDate;
@property (retain, nonatomic) NSString *userActivityType;
@property (retain, nonatomic) NSMutableArray *duplicatedItems;
@property (retain, nonatomic) NSString *contentURL;
@property (retain) PRSRankingItem *rankingItem;
@property (retain, nonatomic) NSData *suggestionsFeedbackData;
@property (nonatomic) unsigned int feedbackBlockId;
@property (nonatomic) _Bool hasCommunicationContent;
@property (nonatomic) unsigned long long predictionsFeedbackActionType;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)punchout;
- (id)objectForFeedback;

@end
