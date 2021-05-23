/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface DSGeneralLogCollector : NSObject

{
    NSArray *_logFiles;
    NSDictionary *_friendlyAppNamesDictionary;
    NSArray *_logIDs;
}

@property (retain, nonatomic) NSArray *logFiles;
@property (retain, nonatomic) NSDictionary *friendlyAppNamesDictionary;
@property (retain, nonatomic) NSArray *logIDs;

+ (id)latestUserLog;
+ (id)latestRootLog;

- (void)getLogFiles;
- (id)logFilesFromEnumerator:(id)arg1;
- (id)initWithLogIDs:(id)arg1;
- (void)enumerateLogLinesWithBlock:(CDUnknownBlockType)arg1;

@end
