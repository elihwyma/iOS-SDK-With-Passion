/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class NSDictionary;

@protocol PXMutableBrowserSummaryController <Swift>

@property (nonatomic) _Bool shouldUseSubtitles;
@property (nonatomic) _Bool shouldUseNavigationTitle;
@property (nonatomic) _Bool shouldUseAbbreviatedDates;
@property (nonatomic) _Bool shouldShowLocationNames;
@property (copy, nonatomic) NSDictionary *defaultAttributes;
@property (copy, nonatomic) NSDictionary *emphasizedAttributes;
@property (copy, nonatomic) NSDictionary *selectionAttributes;

- (unsigned short)invalidateContainerTitle;
- (unsigned short)invalidateLocalizedContainerItemsCount;
- (unsigned short)invalidateContainerDateInterval;
- (unsigned short)invalidateVisibleContent;
- (unsigned short)invalidateSelection;
- (unsigned short)invalidateFilteringContainerContent;

@end
