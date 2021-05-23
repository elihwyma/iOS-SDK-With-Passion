/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGLayout.h>

@class NSArray, NSString;

@interface PXGPPTAnimationLayout : PXGLayout

{
    CDStruct_d97c9657 _updateFlags;
    NSArray *_colors;
    unsigned int _numberOfRows;
    unsigned int _numberOfColumns;
    long long _style;
}

@property (nonatomic) unsigned int numberOfRows;
@property (nonatomic) unsigned int numberOfColumns;
@property (nonatomic) long long style;
@property (nonatomic, readonly) NSString *configurationDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)update;
- (void)_updateContent;
- (void)referenceSizeDidChange;
- (struct UIColor *)colorAtIndex:(unsigned int)arg1 inLayout:(id)arg2;

@end
