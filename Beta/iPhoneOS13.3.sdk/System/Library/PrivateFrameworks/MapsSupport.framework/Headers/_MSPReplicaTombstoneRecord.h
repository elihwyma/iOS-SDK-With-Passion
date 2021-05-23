/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSProxy.h>

@protocol MSPReplicaRecord;

@interface _MSPReplicaTombstoneRecord : NSProxy

{
    id <MSPReplicaRecord> _record;
}

- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)contents;
- (id)contentsTimestamp;
- (id)_initWithRecord:(id)arg1;

@end
