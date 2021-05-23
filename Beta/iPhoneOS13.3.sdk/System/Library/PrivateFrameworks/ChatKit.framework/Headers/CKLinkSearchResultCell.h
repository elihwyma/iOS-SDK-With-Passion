/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKEditableSearchResultCell.h>

@class LPLinkMetadata, LPLinkView, NSString;

@interface CKLinkSearchResultCell : CKEditableSearchResultCell

{
    NSString *_identifier;
    LPLinkView *_linkView;
    LPLinkMetadata *_linkMetadata;
    struct UIEdgeInsets marginInsets;
}

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) LPLinkView *linkView;
@property (retain, nonatomic) LPLinkMetadata *linkMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) struct UIEdgeInsets marginInsets;
@property (nonatomic, getter=isEditing) _Bool editing;

+ (id)reuseIdentifier;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)_metadataGenerated:(id)arg1;
- (void)_updateForLinkMetadataWithResult:(id)arg1;
- (void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 mode:(unsigned long long)arg3;
- (void)refreshForSearchTextIfNeeded:(id)arg1;

@end
