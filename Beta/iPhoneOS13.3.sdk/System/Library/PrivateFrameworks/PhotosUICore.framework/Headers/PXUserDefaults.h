/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber;

@protocol PXUserDefaultsDataSource;

@interface PXUserDefaults : NSObject

{
    NSDate *_allPhotosColumnsDate;
    NSNumber *_allPhotosColumns;
    double _defaultUserInterfaceTimeoutDuration;
    NSNumber *_curatedLibraryZoomLevel;
    NSNumber *_daysMarginScale;
    NSNumber *_allPhotosPreferredIndividualItemsColumns;
    NSNumber *_allPhotosAspectFit;
    NSNumber *_allPhotosCaptionsVisible;
    NSNumber *_didShowCurationFooter;
    NSNumber *_didShowCompletedCurationFooterAnimation;
    id <PXUserDefaultsDataSource> _dataSource;
}

@property (weak, nonatomic, readonly) id <PXUserDefaultsDataSource> dataSource;
@property (nonatomic, readonly) double defaultUserInterfaceTimeoutDuration;
@property (copy, nonatomic) NSNumber *curatedLibraryZoomLevel;
@property (copy, nonatomic) NSNumber *daysMarginScale;
@property (copy, nonatomic) NSNumber *allPhotosColumns;
@property (copy, nonatomic) NSNumber *allPhotosPreferredIndividualItemsColumns;
@property (copy, nonatomic) NSNumber *allPhotosAspectFit;
@property (copy, nonatomic) NSNumber *allPhotosCaptionsVisible;
@property (copy, nonatomic) NSNumber *didShowCurationFooter;
@property (copy, nonatomic) NSNumber *didShowCompletedCurationFooterAnimation;

+ (id)standardUserDefaults;

- (id)init;
- (id)initWithDataSource:(id)arg1;
- (_Bool)_isDateStillValid:(id)arg1;

@end
