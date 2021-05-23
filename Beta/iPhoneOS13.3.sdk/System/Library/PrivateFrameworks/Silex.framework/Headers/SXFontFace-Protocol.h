/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/Swift-Protocol.h>

@class NSString;

@protocol SXFontAttributes;

@protocol SXFontFace <Swift>

@property (nonatomic, readonly) NSString *fontName;
@property (nonatomic, readonly) id <SXFontAttributes> fontAttributes;

@end
