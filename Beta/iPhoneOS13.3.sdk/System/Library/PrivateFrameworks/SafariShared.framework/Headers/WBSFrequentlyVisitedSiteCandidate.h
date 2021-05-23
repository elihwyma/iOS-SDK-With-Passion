/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class WBSHistoryItem;

@interface WBSFrequentlyVisitedSiteCandidate : NSObject

{
    float _score;
    WBSHistoryItem *_historyItem;
}

@property (nonatomic, readonly) WBSHistoryItem *historyItem;
@property (nonatomic, readonly) float score;

+ (id)titleForHistoryItem:(id)arg1;

- (id)initWithHistoryItem:(id)arg1 score:(float)arg2;

@end
