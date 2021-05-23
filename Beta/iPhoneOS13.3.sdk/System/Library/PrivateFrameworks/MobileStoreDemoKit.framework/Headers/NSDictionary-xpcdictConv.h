/*
 Image: /System/Library/PrivateFrameworks/MobileStoreDemoKit.framework/MobileStoreDemoKit
 */

#import <Foundation/NSDictionary.h>

@interface NSDictionary (xpcdictConv)

+ (id)dictionaryWithXPCDictionary:(id)arg1;
+ (id)dictionaryFromXPCDictionary:(id)arg1 withDataFromKey:(const char *)arg2;

- (id)initWithXPCDictionary:(id)arg1;
- (id)convertToNSData;
- (id)createXPCDictionary;
- (_Bool)saveAsDataInXPCDictionary:(id)arg1 forKey:(const char *)arg2;

@end
