/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MRAVOutputContextModification : NSObject

{
    unsigned long long _modificationType;
    NSArray *_concreteOutputDevices;
    NSArray *_outputDevices;
    NSArray *_avOutputDevices;
    NSString *_password;
    NSString *_initiator;
}

@property (nonatomic, readonly) unsigned long long modificationType;
@property (nonatomic, readonly) NSArray *concreteOutputDevices;
@property (nonatomic, readonly) NSArray *outputDevices;
@property (nonatomic, readonly) NSArray *avOutputDevices;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *initiator;

- (id)initWithType:(unsigned long long)arg1 devices:(id)arg2;
- (void)modifyWithOutputContext:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_modifyWithOutputContext:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)errorFromResult:(id)arg1;

@end
