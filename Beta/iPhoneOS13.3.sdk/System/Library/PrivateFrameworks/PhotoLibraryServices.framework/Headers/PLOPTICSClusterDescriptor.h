/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface PLOPTICSClusterDescriptor : NSObject

{
    NSNumber *_startIndex;
    NSNumber *_endIndex;
    NSNumber *_clusterSize;
    NSNumber *_rootLevel;
    NSNumber *_minCoreDistanceIndex;
    NSNumber *_minCoreDistance;
}

@property (retain, nonatomic, readonly) NSNumber *startIndex;
@property (retain, nonatomic, readonly) NSNumber *endIndex;
@property (nonatomic, readonly) struct _NSRange indexRange;
@property (retain, nonatomic, readonly) NSNumber *clusterSize;
@property (retain, nonatomic, readonly) NSNumber *rootLevel;
@property (retain, nonatomic, readonly) NSNumber *minCoreDistanceIndex;
@property (retain, nonatomic, readonly) NSNumber *minCoreDistance;

+ (id)clusterDescriptor:(struct _NSRange)arg1 rootLevel:(long long)arg2 minCoreDistanceIndex:(long long)arg3 minCoreDistance:(double)arg4;

- (id)initWithParameters:(struct _NSRange)arg1 rootLevel:(long long)arg2 minCoreDistanceIndex:(long long)arg3 minCoreDistance:(double)arg4;

@end
