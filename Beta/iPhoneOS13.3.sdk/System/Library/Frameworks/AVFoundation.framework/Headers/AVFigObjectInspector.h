/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVFigObjectInspector : NSObject

+ (void)initialize;

- (id)_stringForProperty:(struct __CFString *)arg1;
- (struct CGSize)_sizeForProperty:(struct __CFString *)arg1;
- (CDStruct_1b6d18a9)_timeForProperty:(struct __CFString *)arg1;
- (float)_floatForProperty:(struct __CFString *)arg1 defaultValue:(float)arg2;
- (struct CGAffineTransform)_affineTransformForProperty:(struct __CFString *)arg1;
- (int)_SInt32ForProperty:(struct __CFString *)arg1;
- (unsigned char)_booleanForProperty:(struct __CFString *)arg1;
- (id)_nonNilArrayForProperty:(struct __CFString *)arg1;
- (id)_dictionaryForProperty:(struct __CFString *)arg1;
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;
- (id)_arrayForProperty:(struct __CFString *)arg1;
- (CDStruct_1b6d18a9)_timeForProperty:(struct __CFString *)arg1 defaultValue:(CDStruct_1b6d18a9)arg2;
- (id)_nonNilDictionaryForProperty:(struct __CFString *)arg1;
- (id)_tollFreeBridgedObjectForProperty:(struct __CFString *)arg1;
- (id)_dataForProperty:(struct __CFString *)arg1;
- (long long)_longLongForProperty:(struct __CFString *)arg1;
- (float)_floatForProperty:(struct __CFString *)arg1;
- (struct CGSize)_sizeForProperty:(struct __CFString *)arg1 defaultValue:(struct CGSize)arg2;
- (short)_SInt16ForProperty:(struct __CFString *)arg1;
- (CDStruct_e83c9415)_timeRangeForProperty:(struct __CFString *)arg1;

@end
