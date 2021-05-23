/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXSanFranciscoFontFamily;

@interface SXSanFranciscoFontFamilyProvider : NSObject

{
    SXSanFranciscoFontFamily *_family;
}

@property (nonatomic, readonly) SXSanFranciscoFontFamily *family;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)fontFamilies;

@end
