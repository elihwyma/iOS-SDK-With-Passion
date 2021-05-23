/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@interface WFObjectHasher : NSObject

{
    struct SipHasher _hasher;
    unsigned long long _hash;
    _Bool _finalized;
}

- (id)init;
- (unsigned long long)finalize;
- (id).cxx_construct;
- (id)combine:(id)arg1;
- (id)combineBool:(_Bool)arg1;
- (id)combineInteger:(long long)arg1;
- (id)combineBytes:(void *)arg1 size:(unsigned long long)arg2;
- (id)combineContentsOf:(id)arg1;

@end
