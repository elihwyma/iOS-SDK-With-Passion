/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class NSString;

@protocol PXMutableCuratedLibraryAnalysisStatus <Swift>

@property (nonatomic) long long state;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedDescription;
@property (nonatomic) float progress;
@property (nonatomic) float displayProgress;
@property (nonatomic) _Bool isDaysMonthsYearsStructureEnabled;
@property (nonatomic) _Bool isDevicePlugged;

@end
