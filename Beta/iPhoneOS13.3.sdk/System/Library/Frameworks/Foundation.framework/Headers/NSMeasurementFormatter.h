/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSFormatter.h>

#import <Foundation/Swift-Protocol.h>

@class NSLocale, NSNumberFormatter;

@interface NSMeasurementFormatter : NSFormatter <Swift>

{
    void *_formatter;
}

@property unsigned long long unitOptions;
@property long long unitStyle;
@property (copy) NSLocale *locale;
@property (copy) NSNumberFormatter *numberFormatter;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromUnit:(id)arg1;
- (id)stringFromMeasurement:(id)arg1;
- (id)measurementFromString:(id)arg1;

@end
