/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDateFormatter, NSString, PLDateRangeFormatter;

@protocol OS_dispatch_queue;

@interface PLSearchIndexDateFormatter : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSDateFormatter *_dateFormatter;
    PLDateRangeFormatter *_dateRangeFormatter;
    NSString *_yearFormat;
    NSString *_monthFormat;
    NSString *_displayFormat;
    NSString *_parseFormat;
    NSArray *_monthSymbols;
    _Bool _didSetupLocaleAndFormats;
}

+ (id)monthFormatForLocale:(id)arg1;
+ (id)yearFormatForLocale:(id)arg1;

- (id)init;
- (id)formattedDateRangeWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)_arrangedMonthSymbols;
- (void)_inqSetupDateFormatter;
- (void)_inqUpdateDateFormat:(id)arg1;
- (id)localizedSeasonNameFromDate:(id)arg1;
- (id)localizedMonthStringsFromDate:(id)arg1;
- (id)newLocalizedComponentsFromDate:(id)arg1 includeMonth:(_Bool)arg2;
- (id)_inqNewLocalizedStringFromDate:(id)arg1;
- (id)newLocalizedStringFromDate:(id)arg1;
- (id)newLocalizedStringFromYear:(id)arg1 month:(id)arg2;

@end
