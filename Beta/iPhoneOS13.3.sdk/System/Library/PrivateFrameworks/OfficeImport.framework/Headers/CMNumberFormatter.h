/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CMNumberFormatter : NSObject

{
    int _format;
    int _language;
    void **_numberFormatter;
}

+ (id)formatterForNumberFormat:(int)arg1 language:(int)arg2;

- (void)dealloc;
- (id)stringForNumber:(unsigned long long)arg1;
- (id)initWithNumberFormat:(int)arg1 language:(int)arg2;

@end
