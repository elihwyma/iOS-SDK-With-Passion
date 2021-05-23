/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAV/CoreDAVTask.h>

@class NSArray, NSDictionary, NSString;

@interface CalDAVCalendarSearchTask : CoreDAVTask

{
    NSArray *_languages;
    NSString *_location;
    NSString *_calendarType;
    NSDictionary *_urlsToResults;
}

@property (retain, nonatomic, readonly) NSDictionary *urlsToResults;

- (id)httpMethod;
- (id)requestBody;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)initWithLanguages:(id)arg1 location:(id)arg2 calendarType:(id)arg3 url:(id)arg4;

@end
