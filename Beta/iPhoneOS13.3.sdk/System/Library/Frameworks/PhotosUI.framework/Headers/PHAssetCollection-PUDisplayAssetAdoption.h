/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Photos/PHAssetCollection.h>

@class NSDate, NSString;

@interface PHAssetCollection (PUDisplayAssetAdoption)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;

@end
