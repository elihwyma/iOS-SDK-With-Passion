/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@interface MRSupportedProtocolMessages : NSObject

{
    unsigned long long _lastSupportedMessageType;
}

@property (nonatomic, readonly) unsigned long long lastSupportedMessageType;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLastSupportedMessageType:(unsigned long long)arg1;
- (_Bool)isSupported:(unsigned long long)arg1;

@end
