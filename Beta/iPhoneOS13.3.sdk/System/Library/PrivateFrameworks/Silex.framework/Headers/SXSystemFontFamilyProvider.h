/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface SXSystemFontFamilyProvider : NSObject

{
    NSArray *_fonts;
}

@property (nonatomic, readonly) NSArray *fonts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)fontFamilies;
- (id)initWithFontMetaData:(id)arg1;
- (id)fontsForMetadata:(id)arg1;

@end
