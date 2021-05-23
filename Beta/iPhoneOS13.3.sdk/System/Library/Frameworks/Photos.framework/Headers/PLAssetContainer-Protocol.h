/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/Swift-Protocol.h>

@class NSArray, NSDate, NSOrderedSet, NSString, PLManagedAsset;

@protocol PLAssetContainer <Swift>

@property (retain, nonatomic, readonly) NSString *uuid;
@property (retain, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *localizedTitle;
@property (retain, nonatomic, readonly) NSOrderedSet *assets;
@property (nonatomic, readonly) unsigned long long approximateCount;
@property (nonatomic, readonly) unsigned long long assetsCount;
@property (nonatomic, readonly) unsigned long long photosCount;
@property (nonatomic, readonly) unsigned long long videosCount;
@property (nonatomic, readonly) _Bool isEmpty;
@property (retain, nonatomic) PLManagedAsset *keyAsset;
@property (retain, nonatomic) PLManagedAsset *secondaryKeyAsset;
@property (retain, nonatomic) PLManagedAsset *tertiaryKeyAsset;
@property (nonatomic, readonly) _Bool canShowComments;
@property (nonatomic, readonly) _Bool canShowAvalancheStacks;
@property (copy, nonatomic, readonly) NSArray *localizedLocationNames;
@property (retain, nonatomic, readonly) NSDate *startDate;
@property (retain, nonatomic, readonly) NSDate *endDate;

- (unsigned short)canPerformEditOperation: /* Error: Ran out of types for this method. */;

@end
