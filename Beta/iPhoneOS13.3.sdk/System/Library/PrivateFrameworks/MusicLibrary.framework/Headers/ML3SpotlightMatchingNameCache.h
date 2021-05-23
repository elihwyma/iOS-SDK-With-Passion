/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class ML3MusicLibrary, NSString;

__attribute__((visibility("hidden")))
@interface ML3SpotlightMatchingNameCache : NSObject

{
    unordered_set_da619913 _matchingSet;
    NSString *_matchString;
    _Bool _idle;
    ML3MusicLibrary *_library;
}

+ (void)initialize;
+ (void)loadFromLibrary:(id)arg1 namesMatchingString:(id)arg2 cancelHandler:(CDUnknownBlockType)arg3;

- (void)dealloc;
- (id).cxx_construct;
- (id)_initWithLibrary:(id)arg1 matchString:(id)arg2 cancelHandler:(CDUnknownBlockType)arg3;

@end
