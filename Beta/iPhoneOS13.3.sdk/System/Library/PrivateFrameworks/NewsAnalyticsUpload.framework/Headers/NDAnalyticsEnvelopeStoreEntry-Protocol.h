/*
 Image: /System/Library/PrivateFrameworks/NewsAnalyticsUpload.framework/NewsAnalyticsUpload
 */

#import <NewsAnalyticsUpload/Swift-Protocol.h>

@class NSDate, NSString;

@protocol NDAnalyticsEnvelopeStoreEntry <Swift>

@property (copy, nonatomic, readonly) NSString *envelopeIdentifier;
@property (copy, nonatomic, readonly) NSDate *envelopeSubmissionDate;
@property (nonatomic, readonly) int envelopeContentType;

@end
