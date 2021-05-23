/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <DifferentialPrivacy/_DPDataRecorder.h>

@class _DPDaemonConnection;

@interface _DPXPCRecorder : _DPDataRecorder

{
    _DPDaemonConnection *_connection;
}

@property (nonatomic, readonly) _DPDaemonConnection *connection;

- (id)init;
- (id)initWithKey:(id)arg1;
- (void)recordNumbers:(id)arg1;
- (void)recordStrings:(id)arg1;
- (void)recordWords:(id)arg1;
- (void)recordBitValues:(id)arg1;
- (void)handleReturn:(_Bool)arg1 forSelector:(id)arg2 key:(id)arg3 values:(id)arg4 error:(id)arg5;

@end
