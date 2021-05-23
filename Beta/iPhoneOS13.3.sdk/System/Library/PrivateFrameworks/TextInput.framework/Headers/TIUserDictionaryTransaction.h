/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class TIUserDictionaryEntryValue;

@interface TIUserDictionaryTransaction : NSObject

{
    TIUserDictionaryEntryValue *_valueToDelete;
    TIUserDictionaryEntryValue *_valueToInsert;
}

@property (retain, nonatomic) TIUserDictionaryEntryValue *valueToDelete;
@property (retain, nonatomic) TIUserDictionaryEntryValue *valueToInsert;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
