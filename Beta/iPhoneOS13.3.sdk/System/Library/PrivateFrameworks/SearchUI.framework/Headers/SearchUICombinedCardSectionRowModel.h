/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <SearchUI/SearchUIRowModel.h>

@class NSArray;

@interface SearchUICombinedCardSectionRowModel : SearchUIRowModel

{
    NSArray *_cardSectionRowModels;
}

@property (retain, nonatomic) NSArray *cardSectionRowModels;

- (int)separatorStyle;
- (id)nextCard;
- (_Bool)isDraggable;
- (id)punchouts;
- (id)initWithResult:(id)arg1 cardSectionRowModels:(id)arg2;
- (Class)cellViewClass;
- (id)dragURL;
- (id)firstRowModel;
- (id)dragTitle;
- (id)dragText;
- (id)dragSubtitle;
- (_Bool)isTappable;

@end
