/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface AMSHTTPArchive : NSObject

{
    _Bool _compressed;
    NSData *_backingJSONData;
    NSData *_JSONData;
}

@property (retain, nonatomic) NSData *backingJSONData;
@property (nonatomic, getter=isCompressed) _Bool compressed;
@property (nonatomic, readonly) NSData *JSONData;

+ (id)directory;
+ (id)merge:(id)arg1;
+ (id)merge:(id)arg1 withEstimatedFileSizeLimit:(unsigned long long)arg2;
+ (void)removeHTTPArchiveFilesOlderThanDate:(id)arg1;
+ (id)_createJSONObjectForTaskMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3;
+ (id)_createJSONObjectForEntries:(id)arg1;
+ (double)_timeIntervalFromFilename:(id)arg1;
+ (id)_generateCommentsStringForMetrics:(id)arg1;
+ (id)_generateRequestDictionaryForMetrics:(id)arg1 requestData:(id)arg2;
+ (id)_generateResponseDictionaryForMetrics:(id)arg1 responseData:(id)arg2;
+ (id)_dateFormatterForTimeZone:(id)arg1;
+ (id)_generateHeadersArrayForHTTPHeaders:(id)arg1;
+ (id)_generateContentDictionaryForResponse:(id)arg1 responseData:(id)arg2;

- (_Bool)writeToDiskWithError:(id *)arg1 compressed:(_Bool)arg2;
- (id)_initWithJSONObject:(id)arg1;
- (id)initWithURLTaskInfo:(id)arg1;

@end
