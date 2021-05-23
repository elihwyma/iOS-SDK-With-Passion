/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATOperation.h>

@class IDSService, NSDictionary, NSObject, NSSet;

@protocol CRKIdentitySharingOperationDelegate;

@interface CRKIdentitySharingOperation : CATOperation

{
    NSObject<CRKIdentitySharingOperationDelegate> *_delegate;
    IDSService *_service;
    NSDictionary *_message;
    NSSet *_destinations;
}

@property (nonatomic, readonly) IDSService *service;
@property (copy, nonatomic) NSDictionary *message;
@property (nonatomic, readonly) NSSet *destinations;
@property (weak, nonatomic) NSObject<CRKIdentitySharingOperationDelegate> *delegate;

- (void)main;
- (_Bool)isAsynchronous;
- (void)didSendWithSuccess:(_Bool)arg1 error:(id)arg2;
- (id)initWithService:(id)arg1 message:(id)arg2 recipients:(id)arg3;

@end
