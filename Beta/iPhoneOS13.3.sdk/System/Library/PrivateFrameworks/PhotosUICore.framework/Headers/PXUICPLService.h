/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXCPLServiceStatus, PXCPLState, PXCPLStatus;

@interface PXUICPLService : NSObject <Swift>

{
    PXCPLStatus *_statusProvider;
    PXCPLState *_state;
    PXCPLServiceStatus *_serviceStatus;
    CDUnknownBlockType _handler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) CDUnknownBlockType handler;

- (id)init;
- (void)performAction:(long long)arg1;
- (void)_setState:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (_Bool)canPerformAction:(long long)arg1;
- (void)_serviceStatusDidChange:(id)arg1;

@end
