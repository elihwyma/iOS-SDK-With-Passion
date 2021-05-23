/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCFaceDetailToggleCell.h>

@class NSArray, UIImageView;

@interface NTKCFaceDetailDataSourceCell : NTKCFaceDetailToggleCell

{
    NSArray *_bundleIdentifiers;
    UIImageView *_iconImageView;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (nonatomic, readonly) NSArray *bundleIdentifiers;

+ (id)reuseIdentifier;

- (void)layoutSubviews;
- (id)initWithIdentifiers:(id)arg1 andLabel:(id)arg2 showIcon:(_Bool)arg3 isDonation:(_Bool)arg4;

@end
