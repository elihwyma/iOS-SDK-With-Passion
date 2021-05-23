/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/TVViewElement.h>

@class NSDictionary, NSURL;

@interface TVImageElement : TVViewElement

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSDictionary *srcset;
@property (nonatomic, readonly) long long imageType;

- (struct CGSize)imageScaleToSize;

@end
