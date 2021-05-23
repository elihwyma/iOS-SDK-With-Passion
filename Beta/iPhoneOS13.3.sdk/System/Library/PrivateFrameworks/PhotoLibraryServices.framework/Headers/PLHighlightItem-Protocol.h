/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSDate, NSString;

@protocol PLHighlightItem <Swift>

@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) unsigned long long numberOfAssetsInExtended;
@property (nonatomic, readonly) _Bool isPromoted;
@property (nonatomic, readonly) unsigned short type;
@property (nonatomic, readonly) _Bool isRecent;
@property (nonatomic, readonly) double promotionScore;

@end
