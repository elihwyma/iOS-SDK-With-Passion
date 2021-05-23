/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCFaceDetailToggleCell.h>

@class NSString;

@interface NTKCFaceDetailMonogramComplicationCell : NTKCFaceDetailToggleCell

{
    NSString *_slot;
}

@property (nonatomic, readonly) NSString *slot;

+ (id)reuseIdentifier;

- (id)initWithSlot:(id)arg1 inFace:(id)arg2;

@end
