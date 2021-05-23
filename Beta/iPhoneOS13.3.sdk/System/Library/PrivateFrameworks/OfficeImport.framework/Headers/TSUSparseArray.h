/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSUSparseArray : NSObject <Swift>

{
    struct tsuSaPage *_topPage;
    unsigned long long _nonNilCount;
    unsigned int _depth;
}

@property (readonly) unsigned long long count;

+ (id)array;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)objectForKey:(unsigned long long)arg1;
- (void)removeObjectForKey:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forKey:(unsigned long long)arg2;
- (void)foreach:(CDUnknownBlockType)arg1;
- (unsigned long long)maxIndexForCurrentDepth;
- (void)increaseDepth;
- (_Bool)hasObjectForKey:(unsigned long long)arg1;

@end
