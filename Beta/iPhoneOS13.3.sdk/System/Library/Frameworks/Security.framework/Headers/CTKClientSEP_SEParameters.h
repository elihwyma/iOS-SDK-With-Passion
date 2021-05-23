/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Foundation/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface CTKClientSEP_SEParameters : NSObject

{
    struct aks_params_s *_params;
    NSData *_encoded;
}

@property (copy, readonly) NSData *data;
@property (readonly) const void *bytes;
@property (readonly) unsigned long long length;

- (id)init;
- (void)dealloc;
- (void)setData:(id)arg1 forKey:(unsigned int)arg2;
- (id)initWithParameters:(id)arg1;
- (void)setNumber:(long long)arg1 forKey:(unsigned int)arg2;

@end
