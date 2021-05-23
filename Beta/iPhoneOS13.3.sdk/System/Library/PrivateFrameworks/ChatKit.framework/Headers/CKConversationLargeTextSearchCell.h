/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKConversationListLargeTextCell.h>

@class NSString;

@interface CKConversationLargeTextSearchCell : CKConversationListLargeTextCell

{
    struct UIEdgeInsets marginInsets;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) struct UIEdgeInsets marginInsets;

+ (id)annotatedResultStringWithSearchText:(id)arg1 resultText:(id)arg2 primaryTextColor:(id)arg3 primaryFont:(id)arg4 annotatedTextColor:(id)arg5 annotatedFont:(id)arg6;

- (void)layoutSubviews;
- (id)avatarView;
- (void)updateUnreadIndicatorWithImage:(id)arg1 tintColor:(id)arg2;
- (void)configureWithQueryResult:(id)arg1 searchText:(id)arg2;

@end
