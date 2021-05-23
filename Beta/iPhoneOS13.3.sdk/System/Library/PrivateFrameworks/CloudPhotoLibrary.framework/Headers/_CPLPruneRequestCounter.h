/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class NSCountedSet, NSDate, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _CPLPruneRequestCounter : NSObject

{
    NSCountedSet *_successStatsPerResourceType;
    NSCountedSet *_failedStatsPerResourceType;
    unsigned long long _successSize;
    NSDate *_lastRequestDate;
    NSString *_title;
    NSString *_statusKey;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *statusKey;
@property (nonatomic, readonly) NSString *status;
@property (nonatomic, readonly) NSDictionary *statusDictionary;

- (void)noteRequestForResource:(id)arg1 successful:(_Bool)arg2 prunedSize:(unsigned long long)arg3;
- (id)initWithTitle:(id)arg1 statusKey:(id)arg2;

@end
