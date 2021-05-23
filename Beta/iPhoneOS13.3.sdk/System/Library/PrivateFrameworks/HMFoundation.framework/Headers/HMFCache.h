/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class NSURL;

@interface HMFCache

{
    _Bool _exists;
    NSURL *_URL;
}

@property (copy, readonly) NSURL *URL;
@property (readonly, getter=isExists) _Bool exists;

+ (id)defaultCache;

- (id)init;
- (id)initWithName:(id)arg1;

@end
