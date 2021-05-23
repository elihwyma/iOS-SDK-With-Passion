/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UICollectionViewCell.h>

#import <ChatKit/Swift-Protocol.h>

@class CALayer, NSString, UITableView;

@protocol CKDetailsSearchResultsFooterCellDelegate;

@interface CKDetailsSearchResultsFooterCell : UICollectionViewCell <Swift>

{
    id <CKDetailsSearchResultsFooterCellDelegate> _delegate;
    unsigned long long _sectionIndex;
    NSString *_sectionIdentifier;
    NSString *_title;
    UITableView *_tableView;
    CALayer *_topHairline;
    CALayer *_bottomHairline;
    struct UIEdgeInsets marginInsets;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) CALayer *topHairline;
@property (retain, nonatomic) CALayer *bottomHairline;
@property (nonatomic) id <CKDetailsSearchResultsFooterCellDelegate> delegate;
@property (nonatomic) unsigned long long sectionIndex;
@property (copy, nonatomic) NSString *sectionIdentifier;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) struct UIEdgeInsets marginInsets;

+ (id)reuseIdentifier;
+ (id)supplementaryViewType;
+ (double)desiredZPosition;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end
