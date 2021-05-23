/*
 Image: /System/Library/PrivateFrameworks/CrashReporterSupport.framework/CrashReporterSupport
 */

#import <OSAnalytics/OSAReport.h>

@class NSString;

@interface StructuredDataReport : OSAReport

{
    int _log_type;
    NSString *_raw_logfile;
}

- (void)dealloc;
- (id)problemType;
- (void)generateCustomLogAtLevel:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)initWithType:(int)arg1 withFile:(id)arg2;
- (_Bool)isActionable;
- (id)appleCareDetails;
- (id)reportNamePrefix;
- (void)generateLogAtLevel:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
- (int)streamContentAtLevel:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;

@end
