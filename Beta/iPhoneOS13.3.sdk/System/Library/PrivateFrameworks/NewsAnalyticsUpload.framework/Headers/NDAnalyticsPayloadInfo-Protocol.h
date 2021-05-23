/*
 Image: /System/Library/PrivateFrameworks/NewsAnalyticsUpload.framework/NewsAnalyticsUpload
 */

#import <NewsAnalyticsUpload/Swift-Protocol.h>

@class NSArray, NSDictionary, NSURL;

@protocol NDAnalyticsPayloadInfo <Swift>

@property (copy, nonatomic, readonly) NSURL *endpointURL;
@property (copy, nonatomic, readonly) NSDictionary *valuesByHTTPHeaderField;
@property (copy, nonatomic, readonly) NSArray *entriesToUpload;
@property (copy, nonatomic, readonly) NSDictionary *droppedEntriesByReason;

@end
