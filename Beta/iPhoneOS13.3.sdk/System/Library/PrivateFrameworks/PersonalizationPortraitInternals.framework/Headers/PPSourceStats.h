/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface PPSourceStats : NSObject

{
    long long _minRefCount;
    long long _maxRefCount;
    double _avgRefCount;
    double _medianRefCount;
    NSDate *_earliestDate;
    NSDate *_latestDate;
    long long _uniqueBundleIdCount;
    long long _uniqueDocIdCount;
}

@property (nonatomic, readonly) long long minRefCount;
@property (nonatomic, readonly) long long maxRefCount;
@property (nonatomic, readonly) double avgRefCount;
@property (nonatomic, readonly) double medianRefCount;
@property (nonatomic, readonly) NSDate *earliestDate;
@property (nonatomic, readonly) NSDate *latestDate;
@property (nonatomic, readonly) long long uniqueBundleIdCount;
@property (nonatomic, readonly) long long uniqueDocIdCount;

- (id)toDictionary;
- (id)initWithMinRefCount:(long long)arg1 maxRefCount:(long long)arg2 avgRefCount:(double)arg3 medianRefCount:(double)arg4 earliestDate:(id)arg5 latestDate:(id)arg6 uniqueBundleIdCount:(long long)arg7 uniqueDocIdCount:(long long)arg8;

@end
