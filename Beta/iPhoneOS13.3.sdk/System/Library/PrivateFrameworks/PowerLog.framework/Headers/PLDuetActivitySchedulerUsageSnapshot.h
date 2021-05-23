/*
 Image: /System/Library/PrivateFrameworks/PowerLog.framework/PowerLog
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface PLDuetActivitySchedulerUsageSnapshot : NSObject

{
    NSDate *_startDate;
    NSDate *_stopDate;
    double _numberOfBytesUploadedWiFi;
    double _numberOfBytesDownloadedWiFi;
    double _numberOfBytesUploadedCell;
    double _numberOfBytesDownloadedCell;
    NSString *_bundleID;
}

@property (retain) NSDate *startDate;
@property (retain) NSDate *stopDate;
@property double numberOfBytesUploadedWiFi;
@property double numberOfBytesDownloadedWiFi;
@property double numberOfBytesUploadedCell;
@property double numberOfBytesDownloadedCell;
@property (retain) NSString *bundleID;

- (id)description;

@end
