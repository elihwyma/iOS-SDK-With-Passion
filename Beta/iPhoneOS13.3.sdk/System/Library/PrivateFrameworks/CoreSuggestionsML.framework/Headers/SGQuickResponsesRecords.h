/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface SGQuickResponsesRecords : NSObject

{
    NSArray *_replyRecords;
    double _totalOpportunities;
    double _totalDisplayed;
    double _totalSelected;
    double _totalMatched;
    double _totalUnmatched;
}

@property (nonatomic, readonly) NSArray *replyRecords;
@property (nonatomic, readonly) double totalOpportunities;
@property (nonatomic, readonly) double totalDisplayed;
@property (nonatomic, readonly) double totalSelected;
@property (nonatomic, readonly) double totalMatched;
@property (nonatomic, readonly) double totalUnmatched;

- (id)initWithReplyRecords:(id)arg1 totalOpportunities:(double)arg2 totalDisplayed:(double)arg3 totalSelected:(double)arg4 totalMatched:(double)arg5 totalUnmatched:(double)arg6;

@end
