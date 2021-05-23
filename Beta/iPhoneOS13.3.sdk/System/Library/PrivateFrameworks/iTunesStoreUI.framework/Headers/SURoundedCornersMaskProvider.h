/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUMaskProvider.h>

@interface SURoundedCornersMaskProvider : SUMaskProvider

{
    double _cornerRadius;
}

@property (nonatomic) double cornerRadius;

- (struct CGPath *)copyPathForMaskWithSize:(struct CGSize)arg1;

@end
