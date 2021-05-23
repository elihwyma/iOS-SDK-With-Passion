/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFSiriActivationContext, NSDictionary, NSString;

@interface _AFSiriActivationContextMutation : NSObject

{
    AFSiriActivationContext *_baseModel;
    unsigned long long _timestamp;
    long long _source;
    long long _event;
    unsigned long long _options;
    NSString *_deviceID;
    NSDictionary *_userInfo;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasTimestamp:1;
        unsigned int hasSource:1;
        unsigned int hasEvent:1;
        unsigned int hasOptions:1;
        unsigned int hasDeviceID:1;
        unsigned int hasUserInfo:1;
    } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)setSource:(long long)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setEvent:(long long)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)generate;

@end
