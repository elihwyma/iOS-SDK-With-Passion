/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSEnumerator.h>

@class BRCPrivateClientZone, NSError, NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRCPCSChainEnumerator : NSEnumerator

{
    unsigned long long _maxPathDepth;
    BRCPrivateClientZone *_clientZone;
    NSMutableArray *_stack;
    NSError *_error;
}

- (id)nextObject;
- (id)error;
- (id)initWithPCSChainInfo:(id)arg1 clientZone:(id)arg2;

@end
