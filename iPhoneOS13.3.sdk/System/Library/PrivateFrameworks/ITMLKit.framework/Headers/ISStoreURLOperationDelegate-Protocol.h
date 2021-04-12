//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/ISURLOperationDelegate-Protocol.h>

@class ISStoreURLOperation, NSNumber, NSString, SSAuthenticationContext;

@protocol ISStoreURLOperationDelegate <ISURLOperationDelegate>

@optional
- (BOOL)operation:(ISStoreURLOperation *)arg1 shouldSetStoreFrontID:(NSString *)arg2;
- (void)operation:(ISStoreURLOperation *)arg1 shouldAuthenticateWithContext:(SSAuthenticationContext *)arg2 responseHandler:(void (^)(SSAuthenticateResponse *, NSError *))arg3;
- (void)operation:(ISStoreURLOperation *)arg1 didAuthenticateWithDSID:(NSNumber *)arg2;
@end

