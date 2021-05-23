/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVSupportedReportSetItem : CoreDAVItem

{
    NSMutableSet *_supportedReports;
}

@property (retain, nonatomic) NSMutableSet *supportedReports;

+ (id)copyParseRules;

- (id)init;
- (id)description;
- (_Bool)supportsReportWithNameSpace:(id)arg1 andName:(id)arg2;
- (void)addSupportedReport:(id)arg1;

@end
