/*
 Image: /System/Library/PrivateFrameworks/NewsAnalyticsUpload.framework/NewsAnalyticsUpload
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSURL;

@interface NDAnalyticsPayloadInfo : NSObject

{
    NSURL *_endpointURL;
    NSDictionary *_valuesByHTTPHeaderField;
    NSArray *_entriesToUpload;
    NSDictionary *_droppedEntriesByReason;
}

@property (copy, nonatomic) NSURL *endpointURL;
@property (copy, nonatomic) NSDictionary *valuesByHTTPHeaderField;
@property (copy, nonatomic) NSArray *entriesToUpload;
@property (copy, nonatomic) NSDictionary *droppedEntriesByReason;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
