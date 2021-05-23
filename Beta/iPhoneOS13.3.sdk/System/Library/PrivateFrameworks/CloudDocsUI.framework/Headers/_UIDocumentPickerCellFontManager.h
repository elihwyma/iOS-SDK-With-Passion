/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <Foundation/NSObject.h>

@class UIFont;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerCellFontManager : NSObject

{
    UIFont *_titleFontForGridLayout;
    UIFont *_subtitleFontForGridLayout;
    UIFont *_titleFontForTableLayout;
    UIFont *_subtitleFontForTableLayout;
}

@property (retain, nonatomic) UIFont *titleFontForGridLayout;
@property (retain, nonatomic) UIFont *subtitleFontForGridLayout;
@property (retain, nonatomic) UIFont *titleFontForTableLayout;
@property (retain, nonatomic) UIFont *subtitleFontForTableLayout;

+ (id)sharedFontManager;

- (id)init;
- (void)cacheFonts;

@end
