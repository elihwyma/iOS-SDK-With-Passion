/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSOperation.h>

@class NSError, NSMutableData, NSString;

@interface WFGetExternalAddressOperation : NSOperation

{
    _Bool _useIPv6;
    NSString *_result;
    NSError *_error;
    NSMutableData *_data;
    struct __CFReadStream *_stream;
}

@property (retain, nonatomic) NSMutableData *data;
@property (nonatomic) struct __CFReadStream *stream;
@property (nonatomic) _Bool useIPv6;
@property (retain, nonatomic) NSString *result;
@property (retain, nonatomic) NSError *error;

- (void)dealloc;
- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isReady;
- (void)update;
- (void)handleStreamEvent:(unsigned long long)arg1;

@end
