/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXResource.h>

@class NSString, NSURL;

@protocol SXFontAttributes;

@interface SXFontResource : SXResource

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSString *fontName;
@property (nonatomic, readonly) id <SXFontAttributes> fontAttributes;

- (id)fontAttributesWithValue:(id)arg1 withType:(int)arg2;

@end
