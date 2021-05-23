/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

#import <Contacts/Swift-Protocol.h>

@class NSString;

@protocol _CNContactHandleStringEquivalenceStrategy;

__attribute__((visibility("hidden")))
@interface CNContactHandleIndexableString : NSObject <Swift>

{
    NSString *_indexKey;
    NSString *_stringValue;
    id <_CNContactHandleStringEquivalenceStrategy> _equivalenceStrategy;
}

@property (copy, nonatomic, readonly) NSString *stringValue;
@property (nonatomic, readonly) id <_CNContactHandleStringEquivalenceStrategy> equivalenceStrategy;
@property (copy, nonatomic, readonly) NSString *indexKey;

+ (_Bool)supportsSecureCoding;
+ (id)emailIndexKey:(id)arg1;
+ (id)phoneNumberIndexKey:(id)arg1;
+ (id)equivalenceStrategyWithString:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (_Bool)isEquivalentToString:(id)arg1 strict:(_Bool *)arg2;
- (id)initWithFullString:(id)arg1 indexKey:(id)arg2 equivalenceStrategy:(id)arg3;

@end
