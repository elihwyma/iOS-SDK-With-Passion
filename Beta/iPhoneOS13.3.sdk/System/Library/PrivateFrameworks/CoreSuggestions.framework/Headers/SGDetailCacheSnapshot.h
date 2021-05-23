/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class NSString, SGKeyValueCacheFile;

@interface SGDetailCacheSnapshot : NSObject

{
    SGKeyValueCacheFile *_phoneCache;
    SGKeyValueCacheFile *_emailCache;
    NSString *_maybeFormat;
}

@end
