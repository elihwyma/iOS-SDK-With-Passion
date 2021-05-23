/*
 Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

#import <Foundation/NSObject.h>

@class CFCommandQueuer, CFServiceHelper, NSString;

@interface CFCommandProcessor : NSObject

{
    CFServiceHelper *_serviceHelper;
    CFCommandQueuer *_commandQueuer;
}

@property (retain, nonatomic) CFServiceHelper *serviceHelper;
@property (retain, nonatomic) CFCommandQueuer *commandQueuer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)handleOneWayCommand:(id)arg1;
- (void)handleCommand:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)isDeviceLockedWithPasscodeWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithServiceHelper:(id)arg1 commandQueuer:(id)arg2;

@end
