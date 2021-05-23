/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <Foundation/NSObject.h>

#import <AppleAccount/Swift-Protocol.h>

@class NSString;

@protocol NSURLSessionDataDelegate><NSURLSessionDelegate><NSURLSessionTaskDelegate;

@interface _AAURLSessionDelegate : NSObject <Swift>

{
    id <NSURLSessionDataDelegate><NSURLSessionDelegate><NSURLSessionTaskDelegate> _delegate;
}

@property (weak, nonatomic) id <NSURLSessionDataDelegate><NSURLSessionDelegate><NSURLSessionTaskDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (id)initWithDelegate:(id)arg1;

@end
