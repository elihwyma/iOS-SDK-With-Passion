/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSMutableDictionary, NSString;

@interface PKKeychainItemWrapper : NSObject

{
    NSMutableDictionary *keychainItemData;
    NSMutableDictionary *genericPasswordQuery;
    unsigned long long type;
    NSString *_label;
}

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSMutableDictionary *keychainItemData;
@property (retain, nonatomic) NSMutableDictionary *genericPasswordQuery;
@property (copy, nonatomic) NSString *label;

- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)resetKeychainItem;
- (void)resetLocalKeychainItem;
- (id)initWithIdentifier:(id)arg1 accessGroup:(id)arg2 serviceName:(id)arg3 type:(unsigned long long)arg4;
- (void)applySynchronizableValueToDictionary:(id)arg1;
- (id)secItemFormatToDictionary:(id)arg1;
- (void)writeToKeychain;
- (void)_resetKeychainItem:(_Bool)arg1;
- (id)dictionaryToSecItemFormat:(id)arg1;
- (id)initWithIdentifier:(id)arg1 accessGroup:(id)arg2 serviceName:(id)arg3;

@end
