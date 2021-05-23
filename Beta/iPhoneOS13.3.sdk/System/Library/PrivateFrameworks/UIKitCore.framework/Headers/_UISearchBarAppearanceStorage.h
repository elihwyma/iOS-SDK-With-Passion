/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSValue, UIImage;

__attribute__((visibility("hidden")))
@interface _UISearchBarAppearanceStorage : NSObject

{
    NSMutableDictionary *searchFieldBackgroundImages;
    NSValue *searchFieldPositionAdjustment;
    NSMutableDictionary *iconImages;
    UIImage *separatorImage;
    UIImage *scopeBarBackgroundImage;
}

@property (retain, nonatomic) NSValue *searchFieldPositionAdjustment;
@property (retain, nonatomic) UIImage *separatorImage;
@property (retain, nonatomic) UIImage *scopeBarBackgroundImage;

- (void)setSearchFieldBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)searchFieldBackgroundImageForState:(unsigned long long)arg1;
- (void)setImage:(id)arg1 forIcon:(long long)arg2 state:(unsigned long long)arg3;
- (id)imageForIcon:(long long)arg1 state:(unsigned long long)arg2;

@end
