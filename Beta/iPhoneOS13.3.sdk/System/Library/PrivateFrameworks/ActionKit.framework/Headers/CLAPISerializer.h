/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@interface CLAPISerializer : NSObject

+ (id)webItemTypeStringForType:(long long)arg1;
+ (id)accountWithEmail:(id)arg1 password:(id)arg2 acceptTerms:(_Bool)arg3;
+ (id)itemWithName:(id)arg1;
+ (id)itemWithPrivate:(_Bool)arg1;
+ (id)itemForRestore;
+ (id)bookmarkWithURL:(id)arg1 name:(id)arg2;
+ (id)bookmarkWithURL:(id)arg1 name:(id)arg2 private:(_Bool)arg3;
+ (id)receiptWithBase64String:(id)arg1;
+ (id)JSONDataFromDictionary:(id)arg1;
+ (id)JSONDataFromArray:(id)arg1;

@end
