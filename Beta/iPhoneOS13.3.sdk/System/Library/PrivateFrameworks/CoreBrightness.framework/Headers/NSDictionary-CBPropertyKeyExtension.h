/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <Foundation/NSDictionary.h>

@interface NSDictionary (CBPropertyKeyExtension)

- (id)initWithPropertyKey:(id)arg1 andDisplay:(unsigned long long)arg2;
- (id)initWithPropertyKey:(id)arg1 display:(unsigned long long)arg2 andParameter:(id)arg3;
- (id)initWithPropertyKey:(id)arg1;
- (id)initWithPropertyKey:(id)arg1 andCategory:(unsigned long long)arg2;
- (id)getKeyString;
- (unsigned long long)getKeyDisplayID;
- (id)getKeyDisplayIDRef;
- (unsigned long long)getKeyCategory;
- (id)getKeyCategoryRef;
- (id)getKeyPropertyParameter;
- (id)initWithPropertyKey:(id)arg1 keyboardID:(unsigned long long)arg2;
- (unsigned long long)getKeyKeyboardID;
- (id)getKeyKeyboardIDRef;

@end
