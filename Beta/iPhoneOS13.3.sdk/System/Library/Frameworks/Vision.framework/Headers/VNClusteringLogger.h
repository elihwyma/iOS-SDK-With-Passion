/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VNClusteringLogger : NSObject

{
    _Bool _logEnabled;
    NSURL *_logFolderURL;
    NSURL *_logFileURL;
    NSString *_fileNameBase;
}

@property (readonly) NSURL *logFolderURL;
@property (readonly) NSURL *logFileURL;
@property (readonly) _Bool logEnabled;
@property (readonly) NSString *fileNameBase;

+ (id)padStringWithSpaces:(id)arg1 toSize:(long long)arg2;
+ (void)appendString:(id)arg1 toLogFile:(id)arg2;
+ (id)currentDateTime;
+ (_Bool)isLogEnabled;

- (id)initWithOptions:(id)arg1 logEnabled:(_Bool)arg2 logFileNameBase:(id)arg3;
- (id)initWithOptions:(id)arg1 logEnabled:(_Bool)arg2;
- (void)resetFileNameURLWithCurentDateTime;
- (void)logString:(id)arg1;
- (void)logClusterMap:(const map_ad20a682 *)arg1 level:(id)arg2;
- (void)logClusterMapL0:(const map_ad20a682 *)arg1;
- (void)logClusterLookupMapL0:(const map_ad20a682 *)arg1;
- (void)logClusterMapL1:(const map_ad20a682 *)arg1;
- (void)logClusterLookupMapL1:(const map_ad20a682 *)arg1;

@end
