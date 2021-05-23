/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSURLKeyValuePair : NSObject

{
    id key;
    id value;
    unsigned long long hash;
}

+ (id)pairWithKey:(id)arg1 value:(id)arg2;
+ (id)pair;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)key;
- (id)value;
- (void)setValue:(id)arg1;
- (id)initWithKey:(id)arg1 value:(id)arg2;
- (void)setKey:(id)arg1;

@end
