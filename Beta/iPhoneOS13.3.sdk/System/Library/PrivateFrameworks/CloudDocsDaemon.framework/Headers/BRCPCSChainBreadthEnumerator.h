/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSEnumerator.h>

@class BRCPCSChainInfo;

__attribute__((visibility("hidden")))
@interface BRCPCSChainBreadthEnumerator : NSEnumerator

{
    BRCPCSChainInfo *_chainInfo;
    struct PQLResultSet *_enumerator;
}

- (void)dealloc;
- (id)nextObject;
- (id)initWithPCSChainInfo:(id)arg1 clientZone:(id)arg2;
- (id)chainInfo;

@end
