/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/ODDLayoutObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ODDShape : ODDLayoutObject

{
    int mType;
    int mPresetType;
    NSMutableArray *mAdjustments;
}

- (id)init;
- (id)description;
- (int)type;
- (void)setType:(int)arg1;
- (id)adjustments;
- (int)presetType;
- (void)setPresetType:(int)arg1;
- (void)addAdjustment:(id)arg1;

@end
