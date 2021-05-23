/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICSAPSessionAbstractOperation.h>

@class NSData, NSMutableData;

@interface ICSAPSessionVerifySignatureOperation : ICSAPSessionAbstractOperation

{
    NSData *_signatureData;
    NSMutableData *_data;
    CDUnknownBlockType _responseHandler;
}

@property (copy, nonatomic) NSData *signatureData;
@property (retain, nonatomic) NSMutableData *data;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;

- (void)executeWithSAPContext:(id)arg1;
- (void)finishWithSAPContextPreparationError:(id)arg1;

@end
