/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSData, NSDictionary, NSString;

@interface SSHTTPArchive : NSObject

{
    _Bool _compressed;
    NSData *_backingJSONData;
}

@property (retain, nonatomic) NSData *backingJSONData;
@property (nonatomic) _Bool compressed;
@property (nonatomic, readonly) NSData *JSONData;
@property (nonatomic, readonly) NSDictionary *JSONObject;
@property (nonatomic, readonly) NSString *JSONString;

+ (id)merge:(id)arg1;
+ (id)merge:(id)arg1 withEstimatedFileSizeLimit:(unsigned long long)arg2;
+ (double)_timeIntervalFromFilename:(id)arg1;
+ (id)_dateFormatterForTimeZone:(id)arg1;
+ (id)_JSONObjectForTaskMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3;
+ (id)_JSONObjectForEntries:(id)arg1;
+ (id)outputDirectoryForLogConfig:(id)arg1;
+ (id)_entryDictionaryForTaskMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3;
+ (id)_stringFromDate:(id)arg1;
+ (id)_requestDictionaryForTaskTransactionMetrics:(id)arg1 requestData:(id)arg2;
+ (id)_responseDictionaryForTaskMetrics:(id)arg1 responseData:(id)arg2;
+ (id)_generateCommentsForTaskMetrics:(id)arg1;
+ (id)_creatorDictionary;
+ (id)_entriesArrayForTaskMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3;
+ (id)_localIPAddress;
+ (id)_headersArrayForHTTPHeaders:(id)arg1;
+ (id)_contentDictionaryForResponse:(id)arg1 responseData:(id)arg2;
+ (void)removeLogsWithLogConfig:(id)arg1 olderThanDate:(id)arg2;
+ (void)sendWriteAllLogsToDiskNotification;
+ (void)sendWriteAllLogsToDiskDecompressedNotification;

- (id)description;
- (id)initWithJSONObject:(id)arg1;
- (_Bool)writeToDiskWithLogConfig:(id)arg1 compressed:(_Bool)arg2 error:(id *)arg3;
- (id)initWithTaskMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3;
- (_Bool)writeToDiskError:(id *)arg1;

@end
