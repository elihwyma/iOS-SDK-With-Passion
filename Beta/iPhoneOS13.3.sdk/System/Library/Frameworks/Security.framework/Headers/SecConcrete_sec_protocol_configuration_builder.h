/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SecConcrete_sec_protocol_configuration_builder : NSObject

{
    struct __CFDictionary *dictionary;
    _Bool is_apple;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithDictionary:(struct __CFDictionary *)arg1 andInternalFlag:(_Bool)arg2;

@end
