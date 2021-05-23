/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <QuickLook/Swift-Protocol.h>

@class NSString, NSURL;

@protocol QLPreviewItem <Swift>

@property (nonatomic, readonly) NSURL *previewItemURL;
@property (nonatomic, readonly) NSString *previewItemTitle;

@end
