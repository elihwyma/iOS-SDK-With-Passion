/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEIPSecSASession.h>

@interface NEIPSecSAKernelSession : NEIPSecSASession

{
    struct NEIPSecDB_s *_internalSession;
}

@property (nonatomic) struct NEIPSecDB_s *internalSession;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)setDelegateQueue:(id)arg1;
- (id)initWithName:(id)arg1 delegate:(id)arg2;
- (id)initWithName:(id)arg1 delegate:(id)arg2 pfkeySocket:(int)arg3;
- (_Bool)addLarvalSA:(id)arg1;
- (_Bool)addSA:(id)arg1;
- (_Bool)updateSA:(id)arg1;
- (void)startIdleTimeout:(unsigned int)arg1 incomingSA:(id)arg2 outgoingSA:(id)arg3;
- (void)startBlackholeDetection:(unsigned int)arg1 incomingSA:(id)arg2 outgoingSA:(id)arg3;
- (_Bool)migrateSA:(id)arg1;
- (_Bool)removeSA:(id)arg1;
- (void)removeAllSAs;

@end
