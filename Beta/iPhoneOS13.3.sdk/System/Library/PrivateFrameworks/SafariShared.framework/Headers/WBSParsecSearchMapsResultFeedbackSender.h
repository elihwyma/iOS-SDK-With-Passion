/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol WBSParsecSearchResultPresentedInCard><WBSCompletionListItem;

@interface WBSParsecSearchMapsResultFeedbackSender : NSObject

{
    id <WBSParsecSearchResultPresentedInCard><WBSCompletionListItem> _searchResult;
}

@property (weak, nonatomic, readonly) id <WBSParsecSearchResultPresentedInCard><WBSCompletionListItem> searchResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)placeViewController:(id)arg1 shouldLogFeedbackOfType:(int)arg2;
- (id)initWithSearchResult:(id)arg1;

@end
