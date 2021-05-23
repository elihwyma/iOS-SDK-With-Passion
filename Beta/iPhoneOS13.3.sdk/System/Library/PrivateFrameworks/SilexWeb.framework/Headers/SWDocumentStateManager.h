/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <Foundation/NSObject.h>

@class NFStateMachine, NSMutableArray, NSString, WKUserContentController;

@interface SWDocumentStateManager : NSObject

{
    WKUserContentController *_userContentController;
    NSMutableArray *_onReadyBlocks;
    NSMutableArray *_onLoadBlocks;
    NSMutableArray *_onUnloadBlocks;
    NFStateMachine *_stateMachine;
}

@property (nonatomic, readonly) WKUserContentController *userContentController;
@property (nonatomic, readonly) NSMutableArray *onReadyBlocks;
@property (nonatomic, readonly) NSMutableArray *onLoadBlocks;
@property (nonatomic, readonly) NSMutableArray *onUnloadBlocks;
@property (nonatomic, readonly) NFStateMachine *stateMachine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)onUnload:(CDUnknownBlockType)arg1;
- (void)onLoad:(CDUnknownBlockType)arg1;
- (void)documentIsReady;
- (void)onReady:(CDUnknownBlockType)arg1;
- (void)documentStartedLoading;
- (void)documentWillUnload;
- (id)initWithUserContentController:(id)arg1;

@end
