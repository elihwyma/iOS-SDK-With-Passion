/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/Swift-Protocol.h>

@class NSArray, NSDate;

@protocol PGMemoryCore <Swift>

@property (nonatomic, readonly) NSDate *universalStartDate;
@property (nonatomic, readonly) NSDate *universalEndDate;
@property (nonatomic, readonly) NSArray *meaningLabels;
@property (nonatomic, readonly) NSArray *moodKeywords;
@property (nonatomic, readonly) unsigned long long suggestedMood;
@property (nonatomic, readonly) unsigned long long category;

@end
