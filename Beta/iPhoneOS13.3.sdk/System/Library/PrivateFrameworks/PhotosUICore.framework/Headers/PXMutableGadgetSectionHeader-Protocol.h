/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@class NSString, PXGadgetSpec;

@protocol PXMutableGadgetSectionHeader

@property (nonatomic) unsigned long long headerStyle;
@property (copy, nonatomic) NSString *headerTitle;
@property (nonatomic) unsigned long long buttonType;
@property (copy, nonatomic) NSString *customButtonTitle;
@property (copy, nonatomic) CDUnknownBlockType accessoryButtonPressed;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (nonatomic) _Bool isFirstSection;
@property (nonatomic) _Bool shouldShowDividerOnFirstSection;

@end
