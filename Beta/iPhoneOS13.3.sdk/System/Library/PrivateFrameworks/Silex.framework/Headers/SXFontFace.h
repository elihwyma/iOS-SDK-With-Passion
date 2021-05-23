/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

#import <Silex/Swift-Protocol.h>

@class NSString;

@protocol SXFontAttributes;

@interface SXFontFace : NSObject <Swift>

{
    NSString *_fontName;
    id <SXFontAttributes> _fontAttributes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *fontName;
@property (nonatomic, readonly) id <SXFontAttributes> fontAttributes;

- (id)initWithFontName:(id)arg1 fontAttributes:(id)arg2;

@end
