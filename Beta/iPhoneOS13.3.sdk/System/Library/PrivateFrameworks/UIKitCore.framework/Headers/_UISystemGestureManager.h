/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class FBSDisplayMonitor, NSMutableDictionary, NSString;

@interface _UISystemGestureManager : NSObject <Swift>

{
    NSMutableDictionary *_displayIdentityToManagerMap;
    FBSDisplayMonitor *_displayMonitor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2;
- (id)_systemGestureManagerForDisplayWithIdentityCreatingIfNeeded:(id)arg1;
- (void)addGestureRecognizer:(id)arg1 toDisplayWithIdentity:(id)arg2;
- (void)addGestureRecognizer:(id)arg1 recognitionEvent:(long long)arg2 toDisplayWithIdentity:(id)arg3;
- (void)removeGestureRecognizer:(id)arg1 fromDisplayWithIdentity:(id)arg2;
- (id)windowForSystemGesturesForDisplayWithIdentity:(id)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1 onDisplayWithIdentity:(id)arg2;
- (void)clearTransformFromDisplayWithIdentity:(id)arg1;

@end
