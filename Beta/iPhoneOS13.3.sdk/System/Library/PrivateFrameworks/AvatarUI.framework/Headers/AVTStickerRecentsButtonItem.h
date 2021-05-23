/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, UIImage;

@interface AVTStickerRecentsButtonItem : NSObject

{
    UIImage *_image;
    NSString *_localizedDescription;
    NSURL *_url;
    CDUnknownBlockType discardableContentHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) CDUnknownBlockType discardableContentHandler;
@property (copy, nonatomic, readonly) NSString *localizedDescription;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSURL *url;
@property (copy, nonatomic, readonly) CDUnknownBlockType provider;

- (id)cellIdentifier;
- (void)discardContent;
- (id)initWithLocalizedDescription:(id)arg1;

@end
