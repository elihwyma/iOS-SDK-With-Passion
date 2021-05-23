/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCFaceDetailSectionController.h>

@class NSArray, NSString, NTKCUpNextDataSourcesManager;

@protocol NTKCFaceDetailDataSourcesSectionDelegate;

@interface NTKCFaceDetailDataSourcesSectionController : NTKCFaceDetailSectionController

{
    _Bool _showsTitleWhenEmpty;
    NTKCUpNextDataSourcesManager *_manager;
    NSString *_headerTitle;
    id <NTKCFaceDetailDataSourcesSectionDelegate> _delegate;
}

@property (retain, nonatomic) NSArray *rows;
@property (retain, nonatomic) NTKCUpNextDataSourcesManager *manager;
@property (copy, nonatomic) NSString *headerTitle;
@property (nonatomic) _Bool showsTitleWhenEmpty;
@property (weak, nonatomic) id <NTKCFaceDetailDataSourcesSectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)hasDataSourcesSectionForFace:(id)arg1 inGallery:(_Bool)arg2;

- (id)titleForHeader;
- (void)toggleCell:(id)arg1 didToggle:(_Bool)arg2;
- (id)_getDisabledDataSources;
- (void)_updatedDisabledDataSources:(id)arg1;
- (void)_buildRowsWithDataSourceEntries:(id)arg1;
- (void)faceDidChange;
- (void)manager:(id)arg1 didUpdateDataSourceEntries:(id)arg2;

@end
