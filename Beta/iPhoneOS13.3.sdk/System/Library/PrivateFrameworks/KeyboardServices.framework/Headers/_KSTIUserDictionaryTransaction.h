/*
 Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

#import <Foundation/NSObject.h>

@class _KSTIUserDictionaryEntryValue;

@interface _KSTIUserDictionaryTransaction : NSObject

{
    _KSTIUserDictionaryEntryValue *_valueToDelete;
    _KSTIUserDictionaryEntryValue *_valueToInsert;
}

@property (retain, nonatomic) _KSTIUserDictionaryEntryValue *valueToDelete;
@property (retain, nonatomic) _KSTIUserDictionaryEntryValue *valueToInsert;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
