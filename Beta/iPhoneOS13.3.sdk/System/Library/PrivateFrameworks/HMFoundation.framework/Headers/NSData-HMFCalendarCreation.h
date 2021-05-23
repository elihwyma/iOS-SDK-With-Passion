/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <Foundation/NSData.h>

@class NSArray, NSString;

@interface NSData (HMFCalendarCreation)

@property (readonly, getter=hmf_isZeroed) _Bool hmf_zeroed;
@property (readonly) NSString *hmf_hexadecimalRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSString *shortDescription;
@property (copy, readonly) NSString *privateDescription;
@property (copy, readonly) NSString *propertyDescription;
@property (copy, nonatomic, readonly) NSArray *attributeDescriptions;

+ (id)shortDescription;

- (id)decodeDateComponents;
- (id)decodeArrayOfDateComponents;
- (id)decodeCalendar;
- (id)hmf_zeroingCopy;
- (id)hmf_hexadecimalStringWithOptions:(unsigned long long)arg1;
- (id)hmf_initWithHexadecimalString:(id)arg1 options:(unsigned long long)arg2;
- (id)decodeTimeZone;

@end
