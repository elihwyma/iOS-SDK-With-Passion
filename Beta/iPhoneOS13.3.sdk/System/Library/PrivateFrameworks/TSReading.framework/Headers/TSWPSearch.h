/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSKSearch.h>

@class NSString, TSWPFilteredString, TSWPStorage;

@interface TSWPSearch : TSKSearch

{
    NSString *_searchedString;
    TSWPFilteredString *_filteredString;
    TSWPStorage *_storage;
    struct _NSRange _range;
}

@property (retain, nonatomic, readonly) TSWPFilteredString *filteredString;
@property (nonatomic, readonly) TSWPStorage *storage;
@property (nonatomic) struct _NSRange range;
@property (nonatomic, readonly) NSString *searchedString;

- (void)dealloc;
- (_Bool)isComplete;
- (id)initWithString:(id)arg1 options:(unsigned long long)arg2 hitBlock:(CDUnknownBlockType)arg3 storage:(id)arg4 range:(struct _NSRange)arg5;
- (void)foundHitWithRange:(struct _NSRange)arg1;

@end
