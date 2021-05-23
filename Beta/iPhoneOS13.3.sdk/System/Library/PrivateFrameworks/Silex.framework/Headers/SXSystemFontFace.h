/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

#import <Silex/Swift-Protocol.h>

@class NSString;

@protocol SXFontAttributes;

@interface SXSystemFontFace : NSObject <Swift>

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

- (id)initWithMetadata:(id)arg1;
- (id)fontAttributesForMetadata:(id)arg1;
- (long long)fontWeightForValue:(id)arg1;
- (long long)fontWidthForValue:(id)arg1;
- (long long)fontStyleForValue:(id)arg1;

@end
