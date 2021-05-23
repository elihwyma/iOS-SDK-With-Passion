/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface REExportedTable : NSObject

{
    NSMutableArray *_data;
    _Bool _sortable;
    NSArray *_header;
}

@property (retain, nonatomic) NSArray *header;
@property (nonatomic, readonly) unsigned long long rowsCount;
@property (nonatomic) _Bool sortable;

- (id)init;
- (id)rowAtIndex:(unsigned long long)arg1;
- (void)addRow:(id)arg1;

@end
