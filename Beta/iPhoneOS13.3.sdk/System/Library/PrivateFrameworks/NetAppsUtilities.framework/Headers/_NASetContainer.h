/*
 Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NASetContainer : NSObject

{
    id _object;
    unsigned long long _index;
    CDUnknownBlockType _comparator;
    CDUnknownBlockType _hashGenerator;
}

@property (retain, nonatomic) id object;
@property (nonatomic) unsigned long long index;
@property (copy, nonatomic) CDUnknownBlockType comparator;
@property (copy, nonatomic) CDUnknownBlockType hashGenerator;

+ (id)containerWithObject:(id)arg1 atIndex:(unsigned long long)arg2 comparator:(CDUnknownBlockType)arg3 hashGenerator:(CDUnknownBlockType)arg4;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
