/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <SearchUI/SearchUIRowModel.h>

@class NSString;

@interface SearchUIScreenTimeResultsRowModel : SearchUIRowModel

{
    NSString *_title;
}

@property (retain, nonatomic) NSString *title;

- (id)initWithSection:(id)arg1;
- (Class)cellViewClass;
- (_Bool)isTappable;

@end
