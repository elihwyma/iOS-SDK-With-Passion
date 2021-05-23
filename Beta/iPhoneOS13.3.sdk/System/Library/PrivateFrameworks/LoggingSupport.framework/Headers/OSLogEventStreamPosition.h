/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <Foundation/NSObject.h>

@interface OSLogEventStreamPosition : NSObject

{
    unsigned char _source[16];
    unsigned char _uuid[16];
    unsigned long long _ct;
}

@property (readonly) const char *sourceUUID;
@property (readonly) const char *UUID;
@property (readonly) unsigned long long continuousTime;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(const char *)arg1 bootUUID:(const char *)arg2 time:(unsigned long long)arg3;

@end
