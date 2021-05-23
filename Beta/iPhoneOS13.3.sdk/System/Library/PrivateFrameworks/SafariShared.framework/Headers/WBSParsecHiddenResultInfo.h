/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSDictionary, WBSParsecSearchResult;

@protocol WBSCompletionListItem;

@interface WBSParsecHiddenResultInfo : NSObject

{
    WBSParsecSearchResult *_hiddenResult;
    id <WBSCompletionListItem> _preferredCompletionListItem;
    long long _reasonForHidingResult;
    unsigned long long _preferredCompletionListItemPositionInCompletionList;
    unsigned long long _preferredCompletionListItemPositionInFrequentlyVisitedSites;
}

@property (nonatomic, readonly) WBSParsecSearchResult *hiddenResult;
@property (nonatomic, readonly) id <WBSCompletionListItem> preferredCompletionListItem;
@property (nonatomic, readonly) long long reasonForHidingResult;
@property (nonatomic) unsigned long long preferredCompletionListItemPositionInCompletionList;
@property (nonatomic) unsigned long long preferredCompletionListItemPositionInFrequentlyVisitedSites;
@property (nonatomic, readonly) NSDictionary *feedbackDictionaryRepresentation;

- (id)initWithHiddenResult:(id)arg1 preferredCompletionListItem:(id)arg2 reason:(long long)arg3;

@end
