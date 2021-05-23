/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarItem.h>

@class NSArray, NSString, _UIStatusBarImageView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarIndicatorItem : _UIStatusBarItem

{
    NSArray *_currentImageNamePrefixes;
    _UIStatusBarImageView *_imageView;
}

@property (copy, nonatomic) NSArray *currentImageNamePrefixes;
@property (retain, nonatomic) _UIStatusBarImageView *imageView;
@property (nonatomic, readonly) NSString *indicatorEntryKey;
@property (nonatomic, readonly) _Bool isTemplateImage;
@property (nonatomic, readonly) _Bool flipsForRightToLeftLayoutDirection;

- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)imageForUpdate:(id)arg1;
- (id)systemImageNameForUpdate:(id)arg1;
- (id)viewForIdentifier:(id)arg1;
- (id)dependentEntryKeys;
- (id)imageNameForUpdate:(id)arg1;
- (_Bool)shouldUpdateIndicatorForIdentifier:(id)arg1;
- (void)_create_imageView;

@end
