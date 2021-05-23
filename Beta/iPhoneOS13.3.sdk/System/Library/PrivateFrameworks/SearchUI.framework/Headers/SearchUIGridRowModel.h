/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@class SearchUIGridLayoutManager;

@interface SearchUIGridRowModel

{
    _Bool _shouldHide;
    SearchUIGridLayoutManager *_gridLayoutManager;
}

@property (retain, nonatomic) SearchUIGridLayoutManager *gridLayoutManager;
@property (nonatomic) _Bool shouldHide;

- (id)initWithResult:(id)arg1 cardSection:(id)arg2 gridLayoutManager:(id)arg3 queryId:(unsigned long long)arg4;

@end
