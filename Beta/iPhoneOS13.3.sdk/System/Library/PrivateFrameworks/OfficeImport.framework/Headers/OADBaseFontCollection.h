/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OADBaseFontCollection : NSObject

{
    NSString *_latinFont;
    NSString *_eastAsianFont;
    NSString *_complexScriptFont;
}

@property (copy, nonatomic) NSString *latinFont;
@property (copy, nonatomic) NSString *eastAsianFont;
@property (copy, nonatomic) NSString *complexScriptFont;

- (_Bool)isEmpty;
- (id)baseFontForId:(int)arg1;
- (void)setBaseFont:(id)arg1 forId:(int)arg2;
- (_Bool)isEqualToBaseFontCollection:(id)arg1;

@end
