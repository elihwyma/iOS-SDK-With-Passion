/*
 Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData;

@interface CPSearchMatcher : NSObject

{
    int _options;
    NSArray *_components;
    NSArray *_asciiComponents;
    NSData *_wholeSearchStringData;
    NSData *_context;
}

- (void)dealloc;
- (_Bool)matches:(id)arg1;
- (_Bool)matchesUTF8String:(const char *)arg1 matchType:(int)arg2 matchOptions:(int)arg3;
- (_Bool)matchesASCIIString:(const char *)arg1 matchType:(int)arg2;
- (_Bool)matchesUTF8String:(const char *)arg1;
- (_Bool)matchesUTF8String:(const char *)arg1 matchType:(int)arg2;
- (id)initWithSearchString:(id)arg1 andLocale:(id)arg2 andOptions:(int)arg3;
- (_Bool)matches:(id)arg1 matchType:(int)arg2;
- (id)initWithSearchString:(id)arg1;
- (id)initWithSearchString:(id)arg1 andLocale:(id)arg2;
- (id)initWithSearchString:(id)arg1 options:(int)arg2;

@end
