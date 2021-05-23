/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSFormatter.h>

#import <Foundation/Swift-Protocol.h>

@class NSString;

@interface NSByteCountFormatter : NSFormatter <Swift>

{
    unsigned int _allowedUnits;
    BOOL _countStyle;
    _Bool _allowsNonnumericFormatting;
    _Bool _includesUnit;
    _Bool _includesCount;
    _Bool _includesActualByteCount;
    _Bool _adaptive;
    _Bool _zeroPadsFractionDigits;
    int _formattingContext;
    int _reserved[5];
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property unsigned long long allowedUnits;
@property long long countStyle;
@property _Bool allowsNonnumericFormatting;
@property _Bool includesUnit;
@property _Bool includesCount;
@property _Bool includesActualByteCount;
@property (getter=isAdaptive) _Bool adaptive;
@property _Bool zeroPadsFractionDigits;
@property long long formattingContext;

+ (id)stringFromByteCount:(long long)arg1 countStyle:(long long)arg2;
+ (id)stringFromMeasurement:(id)arg1 countStyle:(long long)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)_options;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (void)receiveObservedValue:(id)arg1;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (_Bool)isPartialStringValid:(id *)arg1 proposedSelectedRange:(struct _NSRange *)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange)arg4 errorDescription:(id *)arg5;
- (id)stringFromMeasurement:(id)arg1;
- (_Bool)_mayDecorateAttributedStringForObjectValue:(id)arg1;
- (id)stringFromByteCount:(long long)arg1;

@end
