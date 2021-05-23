/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <Foundation/NSObject.h>

@class OSLogEventDecomposedMessage;

__attribute__((visibility("hidden")))
@interface OSLogEventMessageArgument : NSObject

{
    OSLogEventDecomposedMessage *_decomposedMessage;
    struct os_log_fmt_raw_placeholder *_rawArg;
    unsigned long long _sizeofLong;
}

@property (nonatomic, readonly) unsigned long long availability;
@property (nonatomic, readonly) unsigned long long privacy;
@property (nonatomic, readonly) unsigned long long category;
@property (nonatomic, readonly) unsigned long long scalarCategory;
@property (nonatomic, readonly) unsigned long long scalarType;
@property (nonatomic, readonly) NSObject *objectRepresentation;
@property (nonatomic, readonly) const void *rawBytes;
@property (nonatomic, readonly) unsigned short rawBytesLength;
@property (nonatomic, readonly) unsigned long long unsignedInt64Value;
@property (nonatomic, readonly) long long int64Value;
@property (nonatomic, readonly) double doubleValue;
@property (nonatomic, readonly) long double longDoubleValue;

- (id)initWithProxy:(id)arg1 index:(unsigned long long)arg2;

@end
