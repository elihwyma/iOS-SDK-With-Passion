/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXJSONObject.h>

@class NSString, SXFormattedText;

@interface SXGalleryItem : SXJSONObject

@property (nonatomic, readonly) NSString *imageIdentifier;
@property (nonatomic, readonly) NSString *caption;
@property (nonatomic, readonly) NSString *accessibilityCaption;
@property (nonatomic, readonly) SXFormattedText *captionComponent;

@end
