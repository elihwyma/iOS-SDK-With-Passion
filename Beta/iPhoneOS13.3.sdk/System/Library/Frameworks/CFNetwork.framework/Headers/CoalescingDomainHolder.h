/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class PathPolicyManager;

@interface CoalescingDomainHolder : NSObject

{
    struct CoalescingDomain _coalescingDomain;
    PathPolicyManager *_pathPolicyManager;
}

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (id)pathIDForPath:(void *)arg1 lookup:(_Bool)arg2;
- (id)coalescingConnectionHostForRequestHost:(id)arg1;
- (void)addCoalescingConnectionHost:(id)arg1 withDNSRecord:(id)arg2 peerCerts:(id)arg3 trustData:(id)arg4 description:(id)arg5;
- (shared_ptr_2a8298cb)coalescingCoalescingConnectionHost:(id)arg1 ipAddrs:(id)arg2;
- (shared_ptr_2a8298cb)updateCoalescingConnectionWithHost:(id)arg1 ipAddrs:(id)arg2;
- (_Bool)removeCCEntryForHost:(id)arg1;

@end
