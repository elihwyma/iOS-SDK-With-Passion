/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/Swift-Protocol.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, NSArray, NSDate, NSString;

@protocol FCFeedPersonalizingItem <Swift>

@property (copy, nonatomic, readonly) NSString *sourceFeedID;
@property (copy, nonatomic, readonly) NSString *itemID;
@property (copy, nonatomic, readonly) NSDate *publishDate;
@property (nonatomic, readonly) unsigned long long halfLife;
@property (copy, nonatomic, readonly) NSString *publisherID;
@property (copy, nonatomic, readonly) NSArray *topicIDs;
@property (nonatomic, readonly) double globalUserFeedback;
@property (nonatomic, readonly) _Bool hasGlobalUserFeedback;
@property (nonatomic, readonly, getter=isANF) _Bool anf;
@property (nonatomic, readonly, getter=isPaid) _Bool paid;
@property (nonatomic, readonly) _Bool hasVideo;
@property (nonatomic, readonly, getter=isHiddenFromAutoFavorites) _Bool hiddenFromAutoFavorites;
@property (nonatomic, readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts;
@property (nonatomic, readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *publisherCohorts;
@property (nonatomic, readonly, getter=isBundlePaid) _Bool bundlePaid;
@property (nonatomic, readonly) long long bodyTextLength;
@property (nonatomic, readonly) _Bool isFeatured;

- (unsigned short)enumerateTopicCohortsWithBlock: /* Error: Ran out of types for this method. */;

@end
