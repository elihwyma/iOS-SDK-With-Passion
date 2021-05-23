/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <TouchRemote/TRDeviceSetupAction.h>

@class NSError;

@interface TRDeviceSetupCancelAction : TRDeviceSetupAction

{
    NSError *_error;
}

@property (nonatomic, readonly) NSError *error;

- (id)init;
- (id)initWithError:(id)arg1;

@end
