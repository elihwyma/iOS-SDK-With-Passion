/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

@interface NSSharedKeySet : NSObject

{
    char *_g;
    unsigned char _select;
    void *_rankTable;
    unsigned int _M;
    unsigned int _factor;
    unsigned int _numKey;
    unsigned int *_seeds;
    id *_keys;
    NSSharedKeySet *_subSharedKeySet;
    unsigned char _algorithmType;
}

@property char *g;
@property unsigned char select;
@property void *rankTable;
@property unsigned int M;
@property unsigned int factor;
@property unsigned int numKey;
@property unsigned int *seeds;
@property id *keys;
@property (retain) NSSharedKeySet *subSharedKeySet;

+ (id)keySetWithKeys:(id)arg1;
+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (id)keyAtIndex:(unsigned long long)arg1;
- (id)allKeys;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (unsigned long long)keySetCount;
- (unsigned long long)maximumIndex;
- (_Bool)isEmpty;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)indexForKey:(id)arg1;
- (id)initWithKeys:(id *)arg1 count:(unsigned long long)arg2;

@end
