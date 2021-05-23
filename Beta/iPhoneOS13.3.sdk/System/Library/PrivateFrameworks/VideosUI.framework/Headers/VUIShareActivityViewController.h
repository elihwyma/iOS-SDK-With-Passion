/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIActivityViewController.h>

@class LPMetadataProvider, NSString, NSURL, TVImageProxy;

__attribute__((visibility("hidden")))
@interface VUIShareActivityViewController : UIActivityViewController

{
    LPMetadataProvider *_pendingMessageMetadataProvider;
    NSURL *_sharingURL;
    TVImageProxy *_imageProxy;
    NSURL *_itemImageURL;
    NSString *_itemTitle;
    NSString *_itemSubtitle;
}

@property (retain, nonatomic) NSURL *itemImageURL;
@property (retain, nonatomic) NSString *itemTitle;
@property (retain, nonatomic) NSString *itemSubtitle;

+ (void)shareMediaItem:(id)arg1 title:(id)arg2 subtitle:(id)arg3 imageURLStr:(id)arg4 sourceView:(id)arg5;
+ (void)_prepareShareSheet:(id *)arg1 applicationActivities:(id *)arg2 inViewElement:(id)arg3;
+ (void)shareMediaWithShareSheet:(id)arg1;
+ (id)configureViewWithElement:(id)arg1;

- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2;
- (void)_prepareActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateWithViewElement:(id)arg1;

@end
