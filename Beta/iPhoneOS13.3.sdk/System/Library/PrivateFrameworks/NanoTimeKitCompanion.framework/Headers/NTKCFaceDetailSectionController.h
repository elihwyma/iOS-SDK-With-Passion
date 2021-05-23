/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, NTKCDetailTableViewCell, NTKCFaceDetailSectionHeaderView, NTKFace, UITableView, UIViewController;

@protocol NTKCTableViewProviding;

@interface NTKCFaceDetailSectionController : NSObject

{
    _Bool _inGallery;
    _Bool _hasSpacerRow;
    long long _section;
    NSString *_titleForHeader;
    NTKFace *_face;
    UIViewController<NTKCTableViewProviding> *_tableViewController;
    NTKCDetailTableViewCell *_cell;
    NSMutableArray *_rows;
    NTKCFaceDetailSectionHeaderView *_headerView;
}

@property (weak, nonatomic) NTKFace *face;
@property (weak, nonatomic) UIViewController<NTKCTableViewProviding> *tableViewController;
@property (nonatomic) _Bool inGallery;
@property (retain, nonatomic) NTKCDetailTableViewCell *cell;
@property (retain, nonatomic) NSMutableArray *rows;
@property (retain, nonatomic) NTKCFaceDetailSectionHeaderView *headerView;
@property (nonatomic) long long section;
@property (nonatomic, readonly) long long numberOfRows;
@property (nonatomic, readonly) NSString *titleForHeader;
@property (weak, nonatomic, readonly) UITableView *tableView;
@property (nonatomic) _Bool hasSpacerRow;

+ (void)registerForTableView:(id)arg1;

- (id)_groupName;
- (void)_commonInit;
- (_Bool)canSelectRow:(long long)arg1;
- (id)cellForRow:(long long)arg1;
- (double)heightForRow:(long long)arg1;
- (void)faceDidChange;
- (void)didSelectRow:(long long)arg1;
- (_Bool)_canSelectRow:(long long)arg1;
- (id)initWithTableViewController:(id)arg1 face:(id)arg2 inGallery:(_Bool)arg3;
- (void)faceDidChangeResourceDirectory;
- (double)heightForHeaderView;
- (id)_newSectionHeader;
- (double)_heightForSpacerRow;
- (id)_spacerRow;

@end
