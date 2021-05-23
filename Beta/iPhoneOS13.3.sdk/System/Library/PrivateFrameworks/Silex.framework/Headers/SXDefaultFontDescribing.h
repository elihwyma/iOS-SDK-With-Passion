/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

#import <Silex/Swift-Protocol.h>

@class NSString;

@protocol SXTextStyleFontAttributes;

@interface SXDefaultFontDescribing : NSObject <Swift>

{
    id <SXTextStyleFontAttributes> _fontAttributes;
    NSString *_fontName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *fontName;
@property (nonatomic, readonly) id <SXTextStyleFontAttributes> fontAttributes;

- (id)init;

@end
