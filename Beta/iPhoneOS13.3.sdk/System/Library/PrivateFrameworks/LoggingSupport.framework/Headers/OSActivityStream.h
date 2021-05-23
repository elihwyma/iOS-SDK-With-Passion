/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <Foundation/NSObject.h>

@class NSCompoundPredicate, NSMutableSet, OSLogDevice, _OSLogStreamFilter;

@protocol OSActivityStreamDelegate, OSDeviceDelegate;

@interface OSActivityStream : NSObject

{
    struct os_activity_stream_s *_stream;
    NSMutableSet *_pids;
    void *_deviceSearchSession;
    void *_deviceEventSession;
    _Bool _delegateStreamErrorLess;
    _Bool _delegateStreamWithError;
    _Bool _delegateHasDidFail;
    _OSLogStreamFilter *_streamFilter;
    id <OSDeviceDelegate> _deviceDelegate;
    id <OSActivityStreamDelegate> _delegate;
    unsigned long long _options;
    unsigned long long _eventFilter;
    NSCompoundPredicate *_predicate;
    OSLogDevice *_device;
}

@property (nonatomic) unsigned long long options;
@property (nonatomic) unsigned long long eventFilter;
@property (nonatomic) unsigned long long events;
@property (weak, nonatomic) id <OSActivityStreamDelegate> delegate;
@property (copy, nonatomic) NSCompoundPredicate *predicate;
@property (weak, nonatomic) id <OSDeviceDelegate> deviceDelegate;
@property (retain, nonatomic) OSLogDevice *device;

- (id)init;
- (void)dealloc;
- (void)stop;
- (void)start;
- (id)initWithDevice:(void *)arg1;
- (void)addProcessID:(int)arg1;
- (_Bool)streamEvent:(id)arg1 error:(id)arg2;
- (void)startRemote;
- (void)startLocal;
- (void)stopLocal;
- (void)stopRemote;
- (id)getInfoForDevice:(id)arg1 andKey:(id)arg2;
- (_Bool)establishTrust:(id)arg1;

@end
