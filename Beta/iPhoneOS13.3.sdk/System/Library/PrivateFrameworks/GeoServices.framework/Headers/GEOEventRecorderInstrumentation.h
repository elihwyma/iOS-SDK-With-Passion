/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSDate, NSString;

@protocol OS_dispatch_queue;

@interface GEOEventRecorderInstrumentation : NSObject

{
    NSObject<OS_dispatch_queue> *_loggingQueue;
    NSString *_filepath;
    NSString *_geoFilepath;
    NSString *_movieFilepath;
    NSDate *_startDate;
}

+ (id)initializeDefaultInstrumentation;
+ (id)defaultInstrumentation;
+ (void)endInstrumentation;

- (id)init;
- (void)_setupLogging;
- (void)initializeFilepaths;
- (void)writeString:(id)arg1 ToFilepath:(id)arg2;
- (void)_captureScreenVideo:(id)arg1;
- (id)getRecordedFilePaths;
- (void)captureUIEvent:(id)arg1;
- (void)captureUserActionLogMessageEvent:(id)arg1;
- (void)captureEventRecorderScreenVideo;

@end
