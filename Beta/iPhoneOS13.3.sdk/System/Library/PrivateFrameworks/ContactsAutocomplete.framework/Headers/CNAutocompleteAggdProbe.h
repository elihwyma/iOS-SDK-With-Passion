/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

#import <ContactsAutocomplete/Swift-Protocol.h>

@class NSMutableDictionary, NSString;

@interface CNAutocompleteAggdProbe : NSObject <Swift>

{
    NSString *_keyPrefix;
    NSMutableDictionary *_setData;
    NSMutableDictionary *_addData;
    NSString *_bundleID;
}

@property (retain, nonatomic) NSMutableDictionary *setData;
@property (retain, nonatomic) NSMutableDictionary *addData;
@property (copy, nonatomic, readonly) NSString *bundleID;
@property (copy, nonatomic, readonly) NSString *keyPrefix;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)preparedBundleIdentifier:(id)arg1;

- (id)init;
- (void)sendData;
- (id)initWithKeyPrefix:(id)arg1 bundleIdentifier:(id)arg2;
- (id)fullKey:(id)arg1;
- (id)initWithKeyPrefix:(id)arg1;
- (void)recordSetValue:(id)arg1 forKey:(id)arg2;
- (void)recordAddValue:(id)arg1 forKey:(id)arg2;

@end
