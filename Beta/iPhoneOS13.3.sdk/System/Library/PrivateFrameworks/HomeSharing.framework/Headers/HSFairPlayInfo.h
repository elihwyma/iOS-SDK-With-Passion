/*
 Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface HSFairPlayInfo : NSObject

{
    NSObject<OS_dispatch_queue> *_sapQueue;
    void *_hwInfo;
    void *_session;
}

@property (nonatomic, readonly) NSString *deviceGUID;

- (id)init;
- (void)dealloc;
- (id)securityInfoForURL:(id)arg1;
- (_Bool)_getHardwareInfo:(struct FairPlayHWInfo_ *)arg1;
- (void)endSecuritySession;
- (id)_hexStringForData:(id)arg1;
- (id)beginNegotiationWithSAPVersion:(unsigned int)arg1;
- (id)continueNegotationWithSAPVersion:(unsigned int)arg1 data:(id)arg2 isComplete:(_Bool *)arg3;

@end
