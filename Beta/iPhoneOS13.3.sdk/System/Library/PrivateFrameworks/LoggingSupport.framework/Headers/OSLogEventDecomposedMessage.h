/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <Foundation/NSObject.h>

@class OSLogEventProxy;

__attribute__((visibility("hidden")))
@interface OSLogEventDecomposedMessage : NSObject

{
    _Bool _hasPopulatedFields;
    _Bool _hdrNeedsFree;
    unsigned short _pubsize;
    unsigned short _privsize;
    unsigned short _placeholderCount;
    unsigned long long _variant;
    unsigned long long _sizeof_long;
    const struct os_log_fmt_hdr_s *_hdr;
    const void *_pubdata;
    const void *_privdata;
    const char *_fmt;
    unsigned long long _messageState;
    struct os_log_fmt_raw_placeholder *_rawPlaceholders;
    void *_hdr_buffer;
    OSLogEventProxy *_proxy;
}

@property (nonatomic, readonly) OSLogEventProxy *proxy;
@property (nonatomic, readonly) unsigned long long sizeOfLong;
@property (readonly) unsigned long long placeholderCount;
@property (nonatomic, readonly) unsigned long long state;

- (void)dealloc;
- (id)argumentAtIndex:(unsigned long long)arg1;
- (id)placeholderAtIndex:(unsigned long long)arg1;
- (id)literalPrefixAtIndex:(unsigned long long)arg1;
- (void)_unmake;
- (void)_populateFields;
- (id)initWithEventProxy:(id)arg1;
- (struct os_log_fmt_raw_placeholder *)_rawPlaceholderForIndex:(unsigned long long)arg1;
- (void)_initializePlaceholders;

@end
