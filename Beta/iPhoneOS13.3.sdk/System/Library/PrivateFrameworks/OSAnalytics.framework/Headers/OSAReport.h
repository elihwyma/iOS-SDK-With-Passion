/*
 Image: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface OSAReport : NSObject

{
    NSString *_incidentID;
    NSString *_logType;
    double _capture_time;
    NSMutableArray *_notes;
    NSMutableDictionary *_logWritingOptions;
    NSString *_logfile;
}

@property (nonatomic, readonly) NSArray *notes;
@property (nonatomic, readonly) NSString *logfile;

+ (unsigned char)executeWithTimeout:(unsigned int)arg1 Code:(CDUnknownBlockType)arg2;
+ (id)kernelVersionDescription;
+ (id)systemIDWithDescription:(_Bool)arg1;
+ (id)bootArgs;

- (id)init;
- (id)problemType;
- (_Bool)isAppleTV;
- (id)incidentID;
- (_Bool)isActionable;
- (id)appleCareDetails;
- (id)reportNamePrefix;
- (void)generateLogAtLevel:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
- (int)streamContentAtLevel:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
- (_Bool)saveWithOptions:(id)arg1;
- (id)getSyslogForPid:(int)arg1 andOptionalSenders:(id)arg2;
- (id)additionalIPSMetadata;
- (_Bool)secondChanceToSylog;
- (void)symlink:(id)arg1;

@end
