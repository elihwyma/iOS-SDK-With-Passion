/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSProxy.h>

@class NSHashTable, Protocol;

@interface MPProtocolProxy : NSProxy

{
    Protocol *_protocol;
    NSHashTable *_objects;
}

@property (retain, nonatomic) Protocol *protocol;
@property (retain, nonatomic) NSHashTable *objects;

+ (id)proxyForObject:(id)arg1 protocol:(id)arg2;
+ (id)proxyForObjects:(id)arg1 protocol:(id)arg2;

- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;

@end
