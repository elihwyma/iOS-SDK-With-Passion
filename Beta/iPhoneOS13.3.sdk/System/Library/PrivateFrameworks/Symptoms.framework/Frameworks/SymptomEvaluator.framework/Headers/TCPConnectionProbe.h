/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <SymptomEvaluator/TestProbe.h>

@class NSDate, NSObject;

@protocol OS_tcp_connection;

__attribute__((visibility("hidden")))
@interface TCPConnectionProbe : TestProbe

{
    NSObject<OS_tcp_connection> *_connection;
    _Bool _connected;
    _Bool _shouldSendReply;
    NSDate *_startTime;
    double _elapsedTime;
}

- (void)testConection:(id)arg1 port:(unsigned long long)arg2 timeout:(double)arg3 interfaceName:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)cancelTest:(CDUnknownBlockType)arg1;

@end
