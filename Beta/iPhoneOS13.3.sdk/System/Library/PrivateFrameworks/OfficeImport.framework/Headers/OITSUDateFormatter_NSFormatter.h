/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSFormatter.h>

@class NSString, OITSULocale;

__attribute__((visibility("hidden")))
@interface OITSUDateFormatter_NSFormatter : NSFormatter

{
    NSString *_preferredFormat;
    _Bool isDateOnly;
    _Bool isTimeOnly;
    OITSULocale *_locale;
}

@property (retain, nonatomic) NSString *preferredFormat;
@property (nonatomic) _Bool isDateOnly;
@property (nonatomic) _Bool isTimeOnly;
@property (retain, nonatomic) OITSULocale *locale;

- (id)init;
- (id)stringForObjectValue:(id)arg1;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;

@end
