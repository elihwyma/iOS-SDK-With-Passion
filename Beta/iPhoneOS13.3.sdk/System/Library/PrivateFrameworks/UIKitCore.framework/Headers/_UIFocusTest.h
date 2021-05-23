/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol _UIFocusTestDelegate;

@interface _UIFocusTest : NSObject

{
    _Bool _isApplicationTest;
    NSString *_identifier;
    long long _state;
    id <_UIFocusTestDelegate> _delegate;
    CDUnknownBlockType _runCompletionHandler;
}

@property (nonatomic) long long state;
@property (copy, nonatomic) CDUnknownBlockType runCompletionHandler;
@property (nonatomic, getter=_isApplicationTest) _Bool isApplicationTest;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (weak, nonatomic) id <_UIFocusTestDelegate> delegate;

+ (void)_setCurrentTest:(id)arg1;
+ (id)currentTest;

- (void)cancel;
- (void)stop;
- (void)main;
- (id)initWithIdentifier:(id)arg1;
- (void)reset;
- (void)_start;
- (void)prepareWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_finish:(_Bool)arg1;
- (void)runWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
