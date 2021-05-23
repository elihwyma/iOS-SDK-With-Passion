/*
 Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

#import <Foundation/NSString.h>

@class NSArray;

@interface UNLocalizedString : NSString

{
    NSString *_key;
    NSArray *_arguments;
    NSString *_value;
}

@property (copy, nonatomic, readonly) NSString *key;
@property (copy, nonatomic, readonly) NSArray *arguments;
@property (copy, nonatomic, readonly) NSString *value;

+ (_Bool)supportsSecureCoding;
+ (id)localizedStringForKey:(id)arg1 arguments:(id)arg2 value:(id)arg3;

- (id)init;
- (unsigned long long)length;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (Class)classForCoder;
- (Class)classForKeyedArchiver;
- (_Bool)_allowsDirectEncoding;
- (id)un_localizedStringKey;
- (id)_initWithKey:(id)arg1 arguments:(id)arg2 value:(id)arg3;
- (id)un_localizedStringArguments;
- (id)un_localizedStringValue;

@end
