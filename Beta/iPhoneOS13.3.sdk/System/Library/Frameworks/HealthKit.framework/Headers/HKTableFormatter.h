/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDateFormatter, NSString;

@interface HKTableFormatter : NSObject

{
    NSArray *_titles;
    NSArray *_columns;
    NSDateFormatter *_dateFormatter;
    NSString *_title;
}

@property (copy, nonatomic) NSString *title;
@property (nonatomic, readonly) long long rowCount;

+ (id)formatterForCodableCondensedWorkouts;

- (id)init;
- (id)stringFromDate:(id)arg1;
- (id)stringFromTimeInterval:(double)arg1;
- (id)_columnWidths;
- (id)initWithColumnTitles:(id)arg1;
- (void)appendRow:(id)arg1;
- (void)appendWorkout:(id)arg1;
- (id)_formattedTableHeaderForColumnWidths:(id)arg1;
- (void)_appendColumn:(id)arg1 width:(long long)arg2 padding:(id)arg3 row:(id)arg4;
- (void)_enumerateFormattedRowsWithColumnWidths:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)stringFromDate:(id)arg1 fallback:(id)arg2;
- (void)appendHeterogenousRow:(id)arg1;
- (id)formattedTableHeader;
- (void)enumerateFormattedRows:(CDUnknownBlockType)arg1;
- (id)formattedTable;

@end
