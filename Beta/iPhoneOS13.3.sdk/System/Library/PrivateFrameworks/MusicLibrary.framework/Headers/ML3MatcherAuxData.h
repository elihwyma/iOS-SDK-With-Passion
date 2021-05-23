/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class CPSearchMatcher;

__attribute__((visibility("hidden")))
@interface ML3MatcherAuxData : NSObject

{
    CPSearchMatcher *_searchMatcher;
    char *_searchUTF8String;
}

- (void)dealloc;

@end
