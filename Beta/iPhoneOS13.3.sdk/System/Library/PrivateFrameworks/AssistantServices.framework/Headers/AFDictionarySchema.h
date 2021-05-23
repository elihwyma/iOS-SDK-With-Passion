/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface AFDictionarySchema : NSObject

{
    NSMutableDictionary *_coercions;
}

- (id)init;
- (void)setObjectCoercion:(id)arg1 forKey:(id)arg2;
- (id)coerceObject:(id)arg1 error:(id *)arg2;

@end
