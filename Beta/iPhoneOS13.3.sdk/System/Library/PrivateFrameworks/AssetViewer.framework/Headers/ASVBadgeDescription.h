/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <Foundation/NSObject.h>

@class UIImage;

@interface ASVBadgeDescription : NSObject

{
    double _shadowSize;
    unsigned long long _badgeSizeClass;
    UIImage *_badgeImage;
    struct CGSize _badgeSize;
    struct CGPoint _badgeOffset;
}

@property (readonly) struct CGSize badgeSize;
@property (readonly) double shadowSize;
@property (readonly) struct CGPoint badgeOffset;
@property (readonly) unsigned long long badgeSizeClass;
@property (readonly) UIImage *badgeImage;

+ (id)descriptionForSize:(struct CGSize)arg1;

- (id)initWithSizeClass:(unsigned long long)arg1;

@end
