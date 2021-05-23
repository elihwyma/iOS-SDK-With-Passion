/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/Swift-Protocol.h>

@class NSDictionary, NSString, NSURL, UIColor;

@protocol QLPreviewItemPrivateProtocol <Swift>

@property (nonatomic, readonly) NSString *previewItemContentType;
@property (readonly) NSURL *previewItemURLForDisplay;
@property (nonatomic, readonly) _Bool isPromisedItem;
@property (readonly) double autoPlaybackPosition;
@property (readonly) UIColor *backgroundColorOverride;
@property (readonly) _Bool wantsDefaultMediaPlayer;
@property (readonly) NSString *MIMEType;
@property (copy, nonatomic) NSDictionary *previewOptions;

@end
