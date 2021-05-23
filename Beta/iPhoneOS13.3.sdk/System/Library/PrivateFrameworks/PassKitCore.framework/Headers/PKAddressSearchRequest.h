/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSArray, NSPredicate, NSString;

@interface PKAddressSearchRequest : NSObject

{
    NSArray *_keysToFetch;
    CDUnknownBlockType _contactFilter;
    NSString *_outputKey;
    long long _type;
    NSString *_fragment;
    NSPredicate *_predicate;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *fragment;
@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSArray *keysToFetch;
@property (copy, nonatomic) CDUnknownBlockType contactFilter;
@property (retain, nonatomic) NSString *outputKey;

- (id)allKeys;
- (id)initWithEmailAddress:(id)arg1;
- (id)initWithPhoneNumber:(id)arg1;
- (id)initWithPostalAddress:(id)arg1;
- (id)contactKeys;
- (CDUnknownBlockType)_contactPropertyFilterForKey:(id)arg1 propertyName:(id)arg2;
- (id)postalAddressKeys;
- (id)initWithFullText:(id)arg1;
- (id)initWithNameComponents:(id)arg1;

@end
