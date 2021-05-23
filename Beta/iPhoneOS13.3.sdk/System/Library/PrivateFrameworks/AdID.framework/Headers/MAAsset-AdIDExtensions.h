/*
 Image: /System/Library/PrivateFrameworks/AdID.framework/AdID
 */

#import <MobileAsset/MAAsset.h>

@class NSArray, NSNumber, NSString, NSURL;

@interface MAAsset (AdIDExtensions)

@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) NSString *appVectorVersion;
@property (nonatomic, readonly) NSNumber *refreshInterval;
@property (nonatomic, readonly) NSNumber *maxQueryElements;
@property (nonatomic, readonly) NSArray *lookbackPeriods;

- (id)filename;

@end
