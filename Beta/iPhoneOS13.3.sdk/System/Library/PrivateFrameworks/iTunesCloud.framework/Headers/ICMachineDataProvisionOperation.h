/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICMachineDataOperation.h>

@class ICADIProvisionSession;

@interface ICMachineDataProvisionOperation : ICMachineDataOperation

{
    ICADIProvisionSession *_provisionSession;
}

- (void)execute;
- (void)_finishWithError:(id)arg1;

@end
