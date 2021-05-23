/*
 Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CWFChannel : NSObject

{
    int _flags;
    unsigned long long _channel;
}

@property (nonatomic) unsigned long long channel;
@property (nonatomic) int flags;
@property (nonatomic, readonly) int width;
@property (nonatomic, readonly) _Bool is2GHz;
@property (nonatomic, readonly) _Bool is5GHz;
@property (nonatomic, readonly) _Bool isDFS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToChannel:(id)arg1;
- (id)JSONObject;

@end
