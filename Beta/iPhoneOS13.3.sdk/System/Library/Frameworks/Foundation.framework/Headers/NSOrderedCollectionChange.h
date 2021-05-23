/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@interface NSOrderedCollectionChange : NSObject

{
    id _object;
    long long _changeType;
    unsigned long long _index;
    unsigned long long _associatedIndex;
}

@property (readonly) id object;
@property (readonly) long long changeType;
@property (readonly) unsigned long long index;
@property (readonly) unsigned long long associatedIndex;

+ (id)changeWithObject:(id)arg1 type:(long long)arg2 index:(unsigned long long)arg3;
+ (id)changeWithObject:(id)arg1 type:(long long)arg2 index:(unsigned long long)arg3 associatedIndex:(unsigned long long)arg4;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)initWithObject:(id)arg1 type:(long long)arg2 index:(unsigned long long)arg3;
- (id)initWithObject:(id)arg1 type:(long long)arg2 index:(unsigned long long)arg3 associatedIndex:(unsigned long long)arg4;

@end
