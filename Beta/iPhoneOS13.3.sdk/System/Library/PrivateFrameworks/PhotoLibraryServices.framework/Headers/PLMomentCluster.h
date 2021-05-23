/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate;

@interface PLMomentCluster : NSObject

{
    NSArray *_moments;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDate *_localStartDate;
    NSDate *_localEndDate;
}

@property (copy, nonatomic, readonly) NSArray *moments;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSDate *localStartDate;
@property (nonatomic, readonly) NSDate *localEndDate;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithMoments:(id)arg1;

@end
