/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class ReporterFilter;

__attribute__((visibility("hidden")))
@interface TransportHandler : NSObject

{
    struct _transport_connection_s *_connection;
    unsigned long long _connectionId;
    CDUnknownFunctionPointerType _writeFn;
    unsigned int _ackId;
    _Bool _readOutstanding;
    _Bool _filterUpdateOutstanding;
    _Bool _disabled;
    unsigned int _reporterId;
    const char *_reporterName;
    unsigned long long _pid;
    const char *_processName;
    const char *_bundleId;
    ReporterFilter *_reporterFilter;
    int _reporterVersion;
}

+ (void)initialize;
+ (void)updateFilters:(unsigned long long)arg1;
+ (id)applicationStateMonitor;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)disconnect;
- (void)connect:(struct _transport_connection_s *)arg1 id:(unsigned long long)arg2 writefn:(CDUnknownFunctionPointerType)arg3 pid:(unsigned long long)arg4 name:(char *)arg5;
- (void)receivePayload:(const void *)arg1 length:(unsigned long long)arg2;
- (void)startRead;
- (void)_sendFilterUpdate;
- (void)generateLibnetcoreSymptomSignpost:(id)arg1;
- (void)didReceiveEvent:(id)arg1;
- (void)_sendAck:(unsigned int)arg1;

@end
