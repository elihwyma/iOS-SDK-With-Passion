/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCFaceDetailToggleCell.h>

@class NTKEditOptionCollection;

@interface NTKCFaceDetailShowSecondsCell : NTKCFaceDetailToggleCell

{
    NTKEditOptionCollection *_collection;
    long long _mode;
}

@property (nonatomic, readonly) NTKEditOptionCollection *collection;
@property (nonatomic, readonly) long long mode;

+ (id)reuseIdentifier;

- (id)initWithCollection:(id)arg1;

@end
