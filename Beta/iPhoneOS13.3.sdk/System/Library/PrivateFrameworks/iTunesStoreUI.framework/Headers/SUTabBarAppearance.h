/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, UIImage;

@interface SUTabBarAppearance : NSObject

{
    UIImage *_backgroundImage;
    UIImage *_dividerImage;
    UIImage *_selectedDividerImage;
    UIImage *_selectionIndicatorImage;
    double _tabBarButtonSpacing;
    double _tabBarButtonWidth;
    NSMutableDictionary *_titleTextAttributes;
}

@property (retain, nonatomic) UIImage *backgroundImage;
@property (retain, nonatomic) UIImage *dividerImage;
@property (retain, nonatomic) UIImage *selectedDividerImage;
@property (retain, nonatomic) UIImage *selectionIndicatorImage;
@property (nonatomic) double tabBarButtonSpacing;
@property (nonatomic) double tabBarButtonWidth;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)titleTextAttributesForState:(unsigned long long)arg1;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)enumerateTitleTextAttributesUsingBlock:(CDUnknownBlockType)arg1;

@end
