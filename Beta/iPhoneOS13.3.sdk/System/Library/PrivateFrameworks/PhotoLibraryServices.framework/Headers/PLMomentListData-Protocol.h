/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSArray, NSDate, NSObject, NSSet, NSString;

@protocol NSCopying;

@protocol PLMomentListData <Swift>

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSDate *representativeDate;
@property (nonatomic) short granularityLevel;
@property (retain, nonatomic, readonly) NSObject<NSCopying> *uniqueObjectID;
@property (nonatomic) int sortIndex;
@property (retain, nonatomic, readonly) NSSet *moments;
@property (retain, nonatomic, readonly) NSArray *batchedMoments;
@property (retain, nonatomic, readonly) NSString *momentListDebugDescription;
@property (retain, nonatomic, readonly) NSString *title;

- (unsigned short)delete;
- (unsigned short)isDeleted;
- (unsigned short)addMoments: /* Error: Ran out of types for this method. */;

@end
