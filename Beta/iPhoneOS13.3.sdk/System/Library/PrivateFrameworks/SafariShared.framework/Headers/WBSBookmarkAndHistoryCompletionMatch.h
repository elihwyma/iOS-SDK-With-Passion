/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@protocol WBSURLCompletionMatchData;

@interface WBSBookmarkAndHistoryCompletionMatch

{
    struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch>> _match;
}

@property (nonatomic, readonly) id <WBSURLCompletionMatchData> data;
@property (nonatomic, readonly) float weight;

- (id)title;
- (id).cxx_construct;
- (id)originalURLString;
- (id)userVisibleURLString;
- (id)initWithBookmarkAndHistoryCompletionMatch:(Ref_a2762e75 *)arg1 userInput:(id)arg2 forQueryID:(long long)arg3;
- (id)parsecDomainIdentifier;

@end
