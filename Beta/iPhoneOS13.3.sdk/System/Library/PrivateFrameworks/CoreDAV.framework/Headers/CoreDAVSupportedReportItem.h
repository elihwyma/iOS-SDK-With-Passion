/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@interface CoreDAVSupportedReportItem : CoreDAVItem

{
    CoreDAVItem *_report;
}

@property (retain, nonatomic) CoreDAVItem *report;

+ (id)copyParseRules;

- (id)init;
- (id)description;

@end
