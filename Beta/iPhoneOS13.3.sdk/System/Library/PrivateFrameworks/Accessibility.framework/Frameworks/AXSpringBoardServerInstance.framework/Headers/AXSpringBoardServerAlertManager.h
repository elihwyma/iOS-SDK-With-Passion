/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpringBoardServerInstance.framework/AXSpringBoardServerInstance
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface AXSpringBoardServerAlertManager : NSObject

{
    NSMutableDictionary *_handlesByService;
}

@property (retain, nonatomic) NSMutableDictionary *handlesByService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)remoteAlertHandleDidActivate:(id)arg1;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)showAXUIViewService:(id)arg1 withData:(id)arg2;
- (void)hideAXUIViewService:(id)arg1;
- (_Bool)isShowingAXUIViewService:(id)arg1;

@end
