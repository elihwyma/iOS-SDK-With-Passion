/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, PFVideoComplement;

@interface PUVideoComplementItemSource : NSObject

{
    NSURL *_bundleURL;
    PFVideoComplement *_videoComplement;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize)arg3;
- (id)activityViewControllerSubject:(id)arg1;
- (id)initWithVideoComplementBundleAtURL:(id)arg1;
- (id)_initWithVideoComplement:(id)arg1 bundleAtURL:(id)arg2;
- (id)initWithVideoComplement:(id)arg1;

@end
