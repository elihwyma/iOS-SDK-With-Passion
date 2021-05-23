/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface ML3MusicLibrary_SortMapEntry : NSObject

{
    long long _nameOrder;
    NSString *_name;
    NSData *_sortKey;
    int _nameSection;
    _Bool _dirty;
}

- (id)description;
- (id)initWithName:(id)arg1 nameSection:(int)arg2 sortKey:(id)arg3 nameOrder:(long long)arg4 dirtyFlag:(_Bool)arg5;
- (id)initWithName:(id)arg1 nameSection:(int)arg2 sortKey:(id)arg3;

@end
