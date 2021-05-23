/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSItemProvider, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VUIShareURLActivityItem : NSObject

{
    NSItemProvider *_itemProvider;
    NSString *_title;
    NSString *_subtitle;
    NSURL *_imageURL;
    NSURL *_shareURL;
}

@property (nonatomic, readonly) NSURL *shareURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerLinkPresentationMetadata:(id)arg1;
- (id)initWithURL:(id)arg1 title:(id)arg2 subtitle:(id)arg3 imageURL:(id)arg4;

@end
