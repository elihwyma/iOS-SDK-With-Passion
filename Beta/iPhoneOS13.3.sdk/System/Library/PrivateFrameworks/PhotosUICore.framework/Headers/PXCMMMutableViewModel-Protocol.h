/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSDate, NSSet, NSString, NSURL, PXRecipient, PXSectionedSelectionManager;

@protocol PXCMMMutableViewModel <Swift>

@property (copy, nonatomic) NSString *originalTitle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (copy, nonatomic) NSArray *recipients;
@property (copy, nonatomic) NSURL *shareURL;
@property (copy, nonatomic) NSString *shareUUID;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (nonatomic) long long photosCount;
@property (nonatomic) long long videosCount;
@property (nonatomic) long long totalCount;
@property (nonatomic) long long selectedPhotosCount;
@property (nonatomic) long long selectedVideosCount;
@property (nonatomic) long long selectedCount;
@property (nonatomic, getter=isSelecting) _Bool selecting;
@property (nonatomic) _Bool selectionEnabled;
@property (retain, nonatomic) NSSet *disabledActionTypes;
@property (nonatomic) _Bool loadingPeopleSuggestions;
@property (nonatomic) _Bool shouldShowPlaceholder;
@property (nonatomic) _Bool containsUnverifiedPersons;
@property (copy, nonatomic) PXRecipient *originatorRecipient;
@property (nonatomic) unsigned long long numberOfReceivedAssets;

- (unsigned short)setPosterAsset:posterMediaProvider: /* Error: Ran out of types for this method. */;

@end
