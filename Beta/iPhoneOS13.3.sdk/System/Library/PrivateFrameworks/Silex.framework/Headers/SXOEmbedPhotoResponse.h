/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXOEmbedResponse.h>

@class NSURL;

@interface SXOEmbedPhotoResponse : SXOEmbedResponse

@property (nonatomic, readonly) double width;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) struct CGSize size;

@end
