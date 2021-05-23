/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCuratedLibraryAnalysisStatus.h>

@interface PXMockCuratedLibraryAnalysisStatus : PXCuratedLibraryAnalysisStatus

+ (id)_mockStatus;
+ (_Bool)shouldUseMock;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithDataSourceManager:(id)arg1;
- (void)alternateTitleIndexDidChange;
- (void)_updateStatusProperties;

@end
