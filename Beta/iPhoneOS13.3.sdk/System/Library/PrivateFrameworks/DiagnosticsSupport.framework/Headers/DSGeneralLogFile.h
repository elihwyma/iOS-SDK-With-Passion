/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSURL;

@interface DSGeneralLogFile : NSObject

{
    int _logVersion;
    NSURL *_url;
    NSDate *_restoreDate;
    NSDate *_updateDate;
    NSDate *_logStartDate;
    NSString *_hardwareModel;
    NSString *_currentOSVersion;
    NSString *_serialNumber;
}

@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSDate *restoreDate;
@property (nonatomic, readonly) NSDate *updateDate;
@property (nonatomic, readonly) NSDate *logStartDate;
@property (nonatomic, readonly) NSString *hardwareModel;
@property (nonatomic, readonly) NSString *currentOSVersion;
@property (nonatomic, readonly) NSString *serialNumber;
@property (nonatomic, readonly) int logVersion;

- (id)initWithURL:(id)arg1;
- (_Bool)parseDetailsWithURL:(id)arg1;
- (_Bool)parseHeadersWithLine:(id)arg1;
- (_Bool)enumerateLogLinesWithIDs:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end
