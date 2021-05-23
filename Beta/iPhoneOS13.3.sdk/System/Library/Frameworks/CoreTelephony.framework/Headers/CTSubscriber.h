/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

#import <CoreTelephony/Swift-Protocol.h>

@class CTServiceDescriptor, CoreTelephonyClient, NSData, NSString;

@protocol CTSubscriberDelegate;

@interface CTSubscriber : NSObject <Swift>

{
    struct queue _queue;
    CoreTelephonyClient *_client;
    id <CTSubscriberDelegate> _delegate;
    CTServiceDescriptor *_descriptor;
}

@property (retain, nonatomic) CTServiceDescriptor *descriptor;
@property (retain, nonatomic, readonly) NSData *carrierToken;
@property (nonatomic, readonly) NSString *identifier;
@property (weak, nonatomic) id <CTSubscriberDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id).cxx_construct;
- (void)authTokenChanged:(id)arg1;
- (id)initWithDescriptor:(id)arg1;
- (void)authenticate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDescriptor:(id)arg1 client:(id)arg2;
- (_Bool)refreshCarrierToken;
- (void)authenticateWithInfo:(id)arg1 handleResult:(CDUnknownBlockType)arg2;
- (id)typeAllocationCode;

@end
