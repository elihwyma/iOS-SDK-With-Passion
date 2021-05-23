/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <Foundation/NSObject.h>

@class NSFileHandle, NSString;

@interface ASTrafficLogger : NSObject

{
    NSFileHandle *_lookasideFileHandle;
    NSString *_lookasideFilePath;
    _Bool _isOutgoingTraffic;
    _Bool _didFlushLogs;
}

@property (nonatomic) _Bool isOutgoingTraffic;

+ (id)_logQueue;

- (void)dealloc;
- (void)flushLogs;
- (void)logWBXMLData:(id)arg1;
- (void)logPlainTextData:(id)arg1;
- (void)_moveLogFileContentsAtPath:(id)arg1;
- (void)_openLookasideFile;

@end
