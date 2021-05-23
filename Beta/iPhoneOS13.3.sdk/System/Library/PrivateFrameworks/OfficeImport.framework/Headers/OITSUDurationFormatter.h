/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSFormatter.h>

@class NSString, OITSULocale;

__attribute__((visibility("hidden")))
@interface OITSUDurationFormatter : NSFormatter

{
    NSString *mFormat;
    OITSULocale *mLocale;
    int mCompactStyleStartUnit;
}

@property (copy, nonatomic) NSString *format;
@property (nonatomic) int compactStyleStartUnit;
@property (readonly) OITSULocale *locale;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)initWithLocale:(id)arg1;
- (void)p_commonInit;

@end
