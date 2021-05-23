/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, UIImage;

@interface SUSectionButton : NSObject

{
    NSString *_accessibilityTitle;
    NSString *_displayTitle;
    UIImage *_image;
    struct UIEdgeInsets _imageInsets;
    NSURL *_imageURL;
    float _imageURLScale;
    long long _tag;
}

@property (copy, nonatomic) NSString *accessibilityTitle;
@property (copy, nonatomic) NSString *displayTitle;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSURL *imageURL;
@property (nonatomic) float imageURLScale;
@property (nonatomic) struct UIEdgeInsets imageInsets;
@property (nonatomic) long long tag;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSectionButtonDictionary:(id)arg1;
- (void)applyToBarButtonItem:(id)arg1;

@end
