/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class NSDictionary, NSString, NSURL, UIColor;

@interface ARQuickLookPreviewItem : NSObject <Swift>

{
    _Bool _allowsContentScaling;
    NSURL *_canonicalWebPageURL;
    NSURL *_fileURL;
}

@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSURL *canonicalWebPageURL;
@property (nonatomic) _Bool allowsContentScaling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSURL *previewItemURL;
@property (nonatomic, readonly) NSString *previewItemTitle;
@property (nonatomic, readonly) NSString *previewItemContentType;
@property (readonly) NSURL *previewItemURLForDisplay;
@property (nonatomic, readonly) _Bool isPromisedItem;
@property (readonly) double autoPlaybackPosition;
@property (readonly) UIColor *backgroundColorOverride;
@property (readonly) _Bool wantsDefaultMediaPlayer;
@property (readonly) NSString *MIMEType;
@property (copy, nonatomic) NSDictionary *previewOptions;

- (id)initWithFileAtURL:(id)arg1;

@end
