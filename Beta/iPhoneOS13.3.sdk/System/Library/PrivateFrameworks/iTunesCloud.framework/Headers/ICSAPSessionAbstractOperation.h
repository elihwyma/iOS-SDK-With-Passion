/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICAsyncOperation.h>

@class ICSAPSession;

@interface ICSAPSessionAbstractOperation : ICAsyncOperation

{
    ICSAPSession *_sapSession;
}

@property (retain, nonatomic) ICSAPSession *sapSession;

- (void)execute;
- (void)finishWithError:(id)arg1;
- (void)executeWithSAPContext:(id)arg1;
- (void)finishWithSAPContextPreparationError:(id)arg1;

@end
