/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <LoggingSupport/OSLogEventStreamBase.h>

@class NSObject, OSLogEventLiveSource, _OSLogStreamFilter;

@protocol OS_xpc_object;

@interface OSLogEventLiveStream : OSLogEventStreamBase

{
    _OSLogStreamFilter *_streamFilter;
    unsigned long long _reason;
    NSObject<OS_xpc_object> *_diagdconn;
    OSLogEventLiveSource *_source;
    CDUnknownBlockType _dropnoteHandler;
}

@property (retain, nonatomic) NSObject<OS_xpc_object> *diagdconn;
@property (copy, nonatomic) CDUnknownBlockType dropnoteHandler;
@property (nonatomic, readonly) OSLogEventLiveSource *source;

- (void)invalidate;
- (void)activate;
- (void)setFilterPredicate:(id)arg1;
- (id)initWithLiveSource:(id)arg1;
- (void)setDroppedEventHandler:(CDUnknownBlockType)arg1;
- (void)_handleStreamedObject:(id)arg1 usingProxy:(id)arg2;
- (void)_activateLiveStream;

@end
