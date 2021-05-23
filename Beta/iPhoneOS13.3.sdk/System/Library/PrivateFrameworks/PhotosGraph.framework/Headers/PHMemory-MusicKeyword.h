/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Photos/PHMemory.h>

@class NSArray, NSDate, NSString;

@interface PHMemory (MusicKeyword)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDate *universalStartDate;
@property (nonatomic, readonly) NSDate *universalEndDate;
@property (nonatomic, readonly) NSArray *meaningLabels;
@property (nonatomic, readonly) NSArray *moodKeywords;
@property (nonatomic, readonly) unsigned long long suggestedMood;
@property (nonatomic, readonly) unsigned long long category;

@end
