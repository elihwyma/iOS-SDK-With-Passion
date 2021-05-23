/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Photos/PHSuggestion.h>

@class NSDate, NSDictionary, NSString;

@interface PHSuggestion (PXDisplaySuggestionAdoption)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned short state;
@property (nonatomic, readonly) unsigned short type;
@property (nonatomic, readonly) unsigned short subtype;
@property (copy, nonatomic, readonly) NSString *localIdentifier;
@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSDictionary *actionProperties;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;

+ (id)px_keyAssetFilteringPredicate;

- (id)fetchKeyAssets;

@end
