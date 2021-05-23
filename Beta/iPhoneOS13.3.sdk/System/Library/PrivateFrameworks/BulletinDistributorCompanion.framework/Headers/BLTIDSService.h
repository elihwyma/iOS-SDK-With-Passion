/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class IDSService, NSString;

@protocol BLTAbstractIDSDevice;

@interface BLTIDSService : NSObject

{
    IDSService *_service;
}

@property (nonatomic, readonly) id <BLTAbstractIDSDevice> defaultPairedDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithService:(id)arg1;
- (_Bool)sendProtobuf:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;
- (void)setProtobufAction:(SEL)arg1 forIncomingRequestsOfType:(unsigned short)arg2;
- (void)setProtobufAction:(SEL)arg1 forIncomingResponsesOfType:(unsigned short)arg2;
- (_Bool)sendResourceAtURL:(id)arg1 metadata:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id *)arg6 error:(id *)arg7;

@end
