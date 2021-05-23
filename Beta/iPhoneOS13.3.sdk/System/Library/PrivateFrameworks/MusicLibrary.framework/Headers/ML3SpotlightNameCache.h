/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class ML3MusicLibrary;

__attribute__((visibility("hidden")))
@interface ML3SpotlightNameCache : NSObject

{
    struct unordered_map<long long, NSString *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, NSString *>>> _map;
    _Bool _idle;
    ML3MusicLibrary *_library;
}

+ (void)initialize;
+ (id)copyFromLibrary:(id)arg1 cancelHandler:(CDUnknownBlockType)arg2;

- (void)dealloc;
- (id).cxx_construct;
- (id)_initWithLibrary:(id)arg1 cancelHandler:(CDUnknownBlockType)arg2;

@end
