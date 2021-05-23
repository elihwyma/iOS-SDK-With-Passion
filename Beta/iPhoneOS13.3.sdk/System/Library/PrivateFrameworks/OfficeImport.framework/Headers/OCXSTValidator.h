/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OCXSTValidator : NSObject

{
    NSMutableDictionary *_simpleTypeMap;
}

+ (id)validator;
+ (id)validateIntegerValue:(long long)arg1 minValue:(long long)arg2 maxValue:(long long)arg3;
+ (_Bool)isValidValue:(id)arg1 simpleType:(unsigned long long)arg2;
+ (id)simpleType:(unsigned long long)arg1 integerValue:(long long)arg2;
+ (id)simpleType:(unsigned long long)arg1 stringValue:(id)arg2;

- (id)init;
- (id)simpleTypeMap;

@end
