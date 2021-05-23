/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class Protocol;

@interface MRWeakProxy : NSObject

{
    id _object;
    Protocol *_protocol;
}

@property (weak, nonatomic) id object;
@property (retain, nonatomic) Protocol *protocol;

+ (id)weakProxyWithObject:(id)arg1 protocol:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;

@end
