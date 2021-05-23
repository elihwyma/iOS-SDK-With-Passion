/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

#import <Contacts/Swift-Protocol.h>

@class NSString;

@interface CNGeminiHandle : NSObject <Swift>

{
    long long _handleType;
    NSString *_stringValue;
}

@property (nonatomic, readonly) long long handleType;
@property (copy, nonatomic, readonly) NSString *stringValue;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 type:(long long)arg2;

@end
