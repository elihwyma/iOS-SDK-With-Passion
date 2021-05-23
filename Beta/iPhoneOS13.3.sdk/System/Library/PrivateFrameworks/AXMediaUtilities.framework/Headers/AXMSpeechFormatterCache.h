/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface AXMSpeechFormatterCache : NSObject

{
    NSMutableDictionary *_cache;
}

- (id)init;
- (id)speechFormatterForDatatype:(unsigned long long)arg1;

@end
