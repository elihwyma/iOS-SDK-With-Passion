/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class EAGLContext;

@interface TDreamManagerContextMapKey : NSObject

{
    EAGLContext *_ctx;
}

+ (id)currentContextMapKey;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCTX:(id)arg1;

@end
