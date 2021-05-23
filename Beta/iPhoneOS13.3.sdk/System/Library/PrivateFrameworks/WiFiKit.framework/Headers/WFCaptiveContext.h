/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSObject.h>

#import <WiFiKit/Swift-Protocol.h>

@class NSString, NSTimer, WFWebSheetViewController;

@protocol WFNetworkListRecord;

@interface WFCaptiveContext : NSObject <Swift>

{
    _Bool _readyForPresentation;
    id <WFNetworkListRecord> network;
    long long requestedFields;
    CDUnknownBlockType _readyForPresentationHandler;
    CDUnknownBlockType _completionHandler;
    WFWebSheetViewController *_webSheetViewController;
    NSTimer *_timer;
}

@property (retain, nonatomic) WFWebSheetViewController *webSheetViewController;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) _Bool readyForPresentation;
@property (copy, nonatomic) CDUnknownBlockType readyForPresentationHandler;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <WFNetworkListRecord> network;
@property (nonatomic, readonly) long long requestedFields;

- (id)init;
- (void)cancel;
- (void)_presentationTimerFired:(id)arg1;
- (void)_readyForPresentation:(id)arg1;
- (void)webSheetViewController:(id)arg1 didTerminateWithError:(id)arg2;
- (void)webSheetViewControllerContentReadyForPresentation:(id)arg1;

@end
