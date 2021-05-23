/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/Swift-Protocol.h>

@class NSString, NSURL;

@protocol PUImageInfoNode <Swift>

@property (nonatomic, readonly) NSURL *imageDataURL;
@property (nonatomic, readonly) NSString *imageDataUTI;
@property (nonatomic, readonly) _Bool useEmbeddedPreview;
@property (nonatomic, readonly) long long imageExifOrientation;

@end
