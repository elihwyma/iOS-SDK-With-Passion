/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UICollectionViewCell.h>

@class CALayer, CKSpotlightQueryResult, NSString, UITableViewCell;

@protocol CKConversationSearchCellProtocol;

@interface CKMessageSearchResultCell : UICollectionViewCell

{
    _Bool editing;
    NSString *_searchText;
    CALayer *_topHairline;
    CALayer *_bottomHairline;
    UITableViewCell<CKConversationSearchCellProtocol> *_searchCell;
    CKSpotlightQueryResult *_result;
    struct UIEdgeInsets _marginInsets;
}

@property (retain, nonatomic) UITableViewCell<CKConversationSearchCellProtocol> *searchCell;
@property (retain, nonatomic) CKSpotlightQueryResult *result;
@property (retain, nonatomic) CALayer *topHairline;
@property (retain, nonatomic) CALayer *bottomHairline;
@property (copy, nonatomic) NSString *searchText;
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
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 mode:(unsigned long long)arg3;
- (void)refreshForSearchTextIfNeeded:(id)arg1;

@end
