/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemSection.h>

@class NSArray, NSAttributedString, NSDictionary, NSString;

@interface HFMutableItemSection : HFItemSection

@property (copy, nonatomic) NSString *headerTitle;
@property (copy, nonatomic) NSString *footerTitle;
@property (copy, nonatomic) NSAttributedString *attributedFooterTitle;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSDictionary *userInfo;

- (void)setItems:(id)arg1 filteringToDisplayedItems:(id)arg2;
- (void)setItemsUsingDefaultSortComparator:(id)arg1;

@end
