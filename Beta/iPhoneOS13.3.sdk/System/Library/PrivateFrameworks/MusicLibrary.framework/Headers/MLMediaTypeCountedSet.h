/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@interface MLMediaTypeCountedSet : NSObject

{
    struct map<unsigned int, unsigned long, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned long>>> _map;
    unsigned long long _count;
}

@property (nonatomic) unsigned long long count;

- (id)description;
- (id).cxx_construct;
- (void)addMediaType:(unsigned int)arg1 count:(unsigned long long)arg2;
- (void)enumerateMediaTypesWithBlock:(CDUnknownBlockType)arg1;

@end
