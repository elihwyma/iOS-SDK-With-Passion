/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSURL;

@interface StockNewsItem : NSObject

{
    NSString *_headline;
    NSString *_summary;
    NSString *_source;
    NSDate *_date;
    NSURL *_link;
    NSString *_localizedDateString;
}

@property (retain, nonatomic) NSString *headline;
@property (retain, nonatomic) NSString *summary;
@property (retain, nonatomic) NSString *source;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSURL *link;
@property (retain, nonatomic, readonly) NSString *localizedDateString;

+ (id)localizedStringForDate:(id)arg1;

- (id)description;
- (id)archiveDictionary;
- (void)resetLocale;
- (id)initWithArchiveDictionary:(id)arg1;
- (long long)chronologicalComparisonWithNewsItem:(id)arg1;

@end
