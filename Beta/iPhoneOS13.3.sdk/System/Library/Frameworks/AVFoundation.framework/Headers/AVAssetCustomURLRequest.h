/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVAssetCustomURLRequest : NSObject

{
    unsigned long long _requestID;
    struct __CFDictionary *_customURLRequest;
    struct __CFDictionary *_customURLResponse;
}

@property (nonatomic, readonly) unsigned long long requestID;

+ (id)requestWithRequest:(struct __CFDictionary *)arg1 id:(unsigned long long)arg2;

- (id)init;
- (void)dealloc;
- (id)initWithRequest:(struct __CFDictionary *)arg1 id:(unsigned long long)arg2;
- (struct __CFDictionary *)customURLRequest;
- (void)setCustomURLRequest:(struct __CFDictionary *)arg1;
- (struct __CFDictionary *)customURLResponse;
- (void)setCustomURLResponse:(struct __CFDictionary *)arg1;

@end
