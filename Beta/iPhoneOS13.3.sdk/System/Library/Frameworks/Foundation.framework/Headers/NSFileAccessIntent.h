/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface NSFileAccessIntent : NSObject

{
    NSURL *_url;
    _Bool _isRead;
    long long _options;
}

@property (copy) NSURL *URL;
@property (readonly) _Bool isRead;
@property (readonly) unsigned long long readingOptions;
@property (readonly) unsigned long long writingOptions;

+ (id)readingIntentWithURL:(id)arg1 options:(unsigned long long)arg2;
+ (id)writingIntentWithURL:(id)arg1 options:(unsigned long long)arg2;

- (void)dealloc;
- (id)description;

@end
