/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol AVTTransitionModel, AVTUILogger;

@interface AVTTransition : NSObject

{
    _Bool _animated;
    long long _state;
    id <AVTTransitionModel> _model;
    CDUnknownBlockType _setupHandler;
    CDUnknownBlockType _completionHandler;
    id <AVTUILogger> _logger;
}

@property (nonatomic, readonly) id <AVTUILogger> logger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long state;
@property (nonatomic) _Bool animated;
@property (nonatomic, readonly) id <AVTTransitionModel> model;
@property (copy, nonatomic) CDUnknownBlockType setupHandler;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;

- (void)cancel;
- (void)start;
- (id)initWithModel:(id)arg1 animated:(_Bool)arg2 setupHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4 logger:(id)arg5;
- (void)performTransition;
- (void)performCancellation;

@end
