/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString, OADFontCollection;

__attribute__((visibility("hidden")))
@interface OADFontScheme : NSObject

{
    NSString *_name;
    OADFontCollection *_majorFont;
    OADFontCollection *_minorFont;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) OADFontCollection *majorFont;
@property (nonatomic, readonly) OADFontCollection *minorFont;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEmpty;
- (id)fontForId:(int)arg1;
- (void)validateFontScheme;

@end
