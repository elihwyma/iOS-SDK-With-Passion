/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/ESDaemonSupport.framework/ESDaemonSupport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface ESDStatusReportAggregator : NSObject

{
    int _numOutstandingReports;
    CDUnknownBlockType _completionBlock;
    NSMutableDictionary *_persistentUUIDToStatusReport;
    _Bool _finished;
}

- (void)noteAdditionalReportDicts:(id)arg1;
- (void)_coalesceAndReport;
- (id)initWithStatusReports:(id)arg1 numOutstandingReports:(int)arg2 timeout:(double)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end
