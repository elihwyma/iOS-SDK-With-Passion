/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICSAPSessionAbstractOperation.h>

@class NSData;

@interface ICSAPSessionSignDataOperation : ICSAPSessionAbstractOperation

{
    NSData *_data;
    CDUnknownBlockType _responseHandler;
}

@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;

- (void)executeWithSAPContext:(id)arg1;
- (void)finishWithSAPContextPreparationError:(id)arg1;

@end
