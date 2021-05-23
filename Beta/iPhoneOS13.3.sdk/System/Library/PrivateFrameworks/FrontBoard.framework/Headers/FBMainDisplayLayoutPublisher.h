/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

@class FBSDisplayLayout, FBSDisplayLayoutPublisher, NSString;

@interface FBMainDisplayLayoutPublisher : NSObject

{
    FBSDisplayLayoutPublisher *_publisher;
    int _displayBacklightToken;
}

@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) long long backlightLevel;
@property (nonatomic, readonly, getter=isTransitioning) _Bool transitioning;
@property (nonatomic, readonly) FBSDisplayLayout *currentLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)flush;
- (id)addElement:(id)arg1;
- (void)displayMonitor:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3;
- (id)_addElement:(id)arg1 forKey:(id)arg2;
- (void)publisher:(id)arg1 didUpdateLayout:(id)arg2 withTransition:(id)arg3;
- (id)transitionAssertionWithReason:(id)arg1;
- (id)_initWithPublisher:(id)arg1;

@end
