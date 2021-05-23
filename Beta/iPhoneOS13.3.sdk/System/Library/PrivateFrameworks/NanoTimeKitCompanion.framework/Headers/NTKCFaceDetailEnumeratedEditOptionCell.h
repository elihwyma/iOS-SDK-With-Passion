/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCDetailTableViewCell.h>

@class NTKEditOption;

@interface NTKCFaceDetailEnumeratedEditOptionCell : NTKCDetailTableViewCell

{
    _Bool _active;
    NTKEditOption *_editOption;
}

@property (nonatomic, readonly) NTKEditOption *editOption;
@property (nonatomic) _Bool active;

+ (id)reuseIdentifier;

- (double)rowHeight;
- (id)initWithEditOption:(id)arg1 overrideText:(id)arg2;

@end
