/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSDate, NSString;

@protocol PXDisplayAssetCollection <Swift>

@property (nonatomic, readonly) _Bool isEnriched;
@property (nonatomic, readonly) _Bool isEnrichmentComplete;
@property (nonatomic, readonly) double promotionScore;
@property (nonatomic, readonly) _Bool isAggregation;
@property (nonatomic, readonly) _Bool isRecent;
@property (nonatomic, readonly) unsigned short px_highlightEnrichmentState;
@property (nonatomic, readonly) long long px_highlightKind;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedDebugDescription;
@property (nonatomic, readonly) NSArray *localizedLocationNames;
@property (nonatomic, readonly) NSString *localizedDateDescription;
@property (nonatomic, readonly) NSString *localizedSmartDescription;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) unsigned long long estimatedAssetCount;

- (unsigned short)localizedDateDescriptionWithOptions: /* Error: Ran out of types for this method. */;

@end
