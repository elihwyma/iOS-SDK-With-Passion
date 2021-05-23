/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@interface PHImageManagerRequestTracer : NSObject

+ (void)initialize;
+ (id)_currentTimestampString;
+ (void)_inq_recordRequestID:(long long)arg1;
+ (void)_inq_trimToMostRecentImageManagerMessages;
+ (int)requestIDFromTaskIdentifier:(id)arg1;
+ (void)registerRequestID:(int)arg1 withAssetUUID:(id)arg2;
+ (void)traceMessageForRequestID:(int)arg1 message:(id)arg2;
+ (id)recentMessagesSummaryForAssetUUID:(id)arg1;
+ (void)setTracingDisabled:(_Bool)arg1;

@end
