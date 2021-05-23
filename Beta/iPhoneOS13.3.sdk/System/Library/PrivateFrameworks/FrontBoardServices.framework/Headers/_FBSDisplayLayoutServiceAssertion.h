/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@class FBSDisplayLayout, NSString, _FBSDisplayLayoutService;

@interface _FBSDisplayLayoutServiceAssertion : NSObject

{
    struct os_unfair_lock_s _lock;
    _FBSDisplayLayoutService *_lock_service;
}

@property (nonatomic, readonly) FBSDisplayLayout *currentLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)initWithEndpoint:(id)arg1 qos:(BOOL)arg2 observer:(CDUnknownBlockType)arg3;

@end
