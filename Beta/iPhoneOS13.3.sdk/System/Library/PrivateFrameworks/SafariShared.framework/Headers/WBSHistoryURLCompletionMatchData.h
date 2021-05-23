/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WBSHistoryURLCompletionMatchData : NSObject

{
    RefPtr_ed2a6bdb _item;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *originalURLString;
@property (nonatomic, readonly) _Bool containsBookmark;
@property (nonatomic, readonly) double lastVisitedTimeInterval;
@property (nonatomic, readonly) _Bool lastVisitWasFailure;
@property (nonatomic, readonly) long long visitCount;

- (id)init;
- (id).cxx_construct;
- (id)pageTitleAtIndex:(unsigned long long)arg1;
- (id)pageTitleForUserVisibleURLStringAtIndex:(unsigned long long)arg1;
- (id)userVisibleURLStringForPageTitleAtIndex:(unsigned long long)arg1;
- (id)userVisibleURLStringAtIndex:(unsigned long long)arg1;
- (void)enumeratePageTitlesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateUserVisibleURLsUsingBlock:(CDUnknownBlockType)arg1;
- (float)topSitesScoreForPageTitleAtIndex:(unsigned long long)arg1 atTime:(double)arg2;
- (float)topSitesScoreForURLStringAtIndex:(unsigned long long)arg1 atTime:(double)arg2;
- (id)matchDataByMergingWithMatchData:(id)arg1;
- (_Bool)matchesAutocompleteTrigger:(id)arg1;
- (id)initWithCompletionItem:(struct HistoryURLCompletionItem *)arg1;

@end
