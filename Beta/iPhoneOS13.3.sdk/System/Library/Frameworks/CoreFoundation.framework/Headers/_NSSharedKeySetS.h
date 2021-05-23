/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSSharedKeySetS : NSObject

{
    char *_g;
    unsigned char _select;
    void *_rankTable;
    double _c;
    unsigned int _M;
    unsigned int _factor;
    unsigned int _numKey;
    unsigned int *_seeds;
    unsigned short (*_keys1)[1];
    unsigned short (*_keys2)[2];
    unsigned short (*_keys3)[3];
    unsigned char (*_ckeys)[3];
    _NSSharedKeySetS *_subSharedKeySet;
    unsigned int _keyLen;
    unsigned int _type;
}

@property char *g;
@property unsigned char select;
@property void *rankTable;
@property double c;
@property unsigned int M;
@property unsigned int factor;
@property unsigned int numKey;
@property unsigned int *seeds;
@property unsigned short (*keys1)[1];
@property unsigned short (*keys2)[2];
@property unsigned short (*keys3)[3];
@property unsigned char (*ckeys)[3];
@property unsigned int keyLen;
@property unsigned int type;
@property (retain) _NSSharedKeySetS *subSharedKeySet;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)count;
- (id)initWithKeys:(void **)arg1 keyLenghtInBytes:(unsigned int)arg2 count:(unsigned int)arg3 type:(unsigned int)arg4;
- (unsigned short *)keyAtIndex:(unsigned long long)arg1;
- (char *)bytesAtIndex:(unsigned long long)arg1;
- (id)allKeys;
- (unsigned int)keySetCount;
- (unsigned int)maximumIndex;
- (unsigned long long)indexForKey:(unsigned short *)arg1 length:(unsigned long long)arg2;
- (_Bool)isEmpty;
- (unsigned long long)indexForBytes:(char *)arg1 length:(unsigned long long)arg2;

@end
