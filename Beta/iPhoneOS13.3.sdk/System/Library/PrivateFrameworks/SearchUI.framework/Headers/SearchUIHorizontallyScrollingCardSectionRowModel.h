/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <SearchUI/SearchUIRowModel.h>

@class NSArray;

@interface SearchUIHorizontallyScrollingCardSectionRowModel : SearchUIRowModel

{
    NSArray *_cardSectionRowModels;
}

@property (retain) NSArray *cardSectionRowModels;

- (id)reuseIdentifier;
- (id)cardSection;
- (id)initWithResults:(id)arg1;
- (Class)cellViewClass;

@end
