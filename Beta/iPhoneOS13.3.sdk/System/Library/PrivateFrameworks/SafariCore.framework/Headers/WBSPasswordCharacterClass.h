/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WBSPasswordCharacterClass : NSObject

{
    long long _type;
    NSString *_value;
}

@property (nonatomic, readonly) long long type;
@property (copy, nonatomic, readonly) NSString *value;

+ (id)namedCharacterClassWithType:(long long)arg1;
+ (id)customCharacterClassWithValue:(id)arg1;
+ (id)unicodeCharacterClass;
+ (id)asciiPrintableCharacterClass;
+ (id)uppercaseCharacterClass;
+ (id)lowercaseCharacterClass;
+ (id)digitCharacterClass;
+ (id)specialCharacterClass;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithType:(long long)arg1 value:(id)arg2;

@end
