/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNContainerPropertyDescription : NSObject

@property (copy, nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) _Bool isWritable;
@property (nonatomic, readonly) Class valueClass;

- (id)nilValue;
- (_Bool)isValidValue:(id)arg1 error:(id *)arg2;
- (id)CNValueForContainer:(id)arg1;
- (void)setCNValue:(id)arg1 onContainer:(id)arg2;
- (_Bool)isValue:(id)arg1 equalToEmptyEquivalentOrValue:(id)arg2;
- (int)abPropertyID;
- (void *)ABValueFromCNValue:(id)arg1;
- (id)CNValueFromABValue:(void *)arg1;
- (_Bool)isConvertibleABValue:(void *)arg1;
- (void *)ABValueForABSource:(void *)arg1;
- (_Bool)setABValue:(void *)arg1 onABSource:(void *)arg2 error:(struct __CFError **)arg3;

@end
