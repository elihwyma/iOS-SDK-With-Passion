/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSMutableDictionary.h>

__attribute__((visibility("hidden")))
@interface NSDirInfo : NSMutableDictionary

{
    NSMutableDictionary *dict;
}

- (id)init;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)keyEnumerator;
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;
- (id)initWithContentsOfFile:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithDictionary:(id)arg1 copyItems:(_Bool)arg2;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(_Bool)arg4 hardLinkPath:(id)arg5;
- (id)serializeToData;

@end
