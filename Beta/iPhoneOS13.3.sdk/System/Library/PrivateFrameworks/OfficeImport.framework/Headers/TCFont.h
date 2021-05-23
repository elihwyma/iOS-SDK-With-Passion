/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class NSDictionary, NSString, TCFontFamily;

__attribute__((visibility("hidden")))
@interface TCFont : NSObject <Swift>

{
    NSDictionary *_namesByLanguage;
    NSString *_psName;
    TCFontFamily *_family;
    struct TCFontStyling _styling;
}

@property (nonatomic, readonly) NSDictionary *namesByLanguage;
@property (nonatomic, readonly) NSString *psName;
@property (nonatomic, readonly) struct TCFontStyling styling;
@property (nonatomic) TCFontFamily *family;

+ (id)fontWithFont:(id)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id).cxx_construct;
- (int)preferredLanguage;
- (id)equivalentDictionary;
- (id)initWithNamesByLanguage:(id)arg1 psName:(id)arg2 styling:(struct TCFontStyling)arg3;
- (id)englishName;
- (id)localizedFontName;

@end
