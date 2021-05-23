/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSIndexPath, NSString;

@interface _PXSettingsIndexEntry : NSObject

{
    _PXSettingsIndexEntry *_parentEntry;
    NSIndexPath *_indexPath;
    NSString *_sectionTitle;
    NSString *_rowTitle;
}

@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly) NSString *sectionTitle;
@property (nonatomic, readonly) NSString *rowTitle;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;
@property (weak, nonatomic) _PXSettingsIndexEntry *parentEntry;

+ (id)_cellForRowAtIndexPath:(id)arg1 inTableView:(id)arg2;
+ (id)_titleForRowAtIndexPath:(id)arg1 inTableView:(id)arg2;

- (id)initWithRowAtIndexPath:(id)arg1 inTableView:(id)arg2;
- (_Bool)matchesSearchString:(id)arg1;
- (void)revealInSettingsController:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_revealInSettingsController:(id)arg1 drillIn:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_revealInTopOfSettingsController:(id)arg1 drillIn:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

@end
