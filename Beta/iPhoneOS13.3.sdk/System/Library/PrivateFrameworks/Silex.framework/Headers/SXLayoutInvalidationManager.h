/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@protocol SXLayoutBlueprintProvider, SXLayoutInvalidationManagerDelegate;

@interface SXLayoutInvalidationManager : NSObject

{
    _Bool _invalidationDispatched;
    id <SXLayoutInvalidationManagerDelegate> _delegate;
    id <SXLayoutBlueprintProvider> _layoutBlueprintProvider;
    NSMutableArray *_possibleInvalidations;
    NSMutableDictionary *_pendingInvalidations;
}

@property (nonatomic, readonly) id <SXLayoutBlueprintProvider> layoutBlueprintProvider;
@property (nonatomic, readonly) NSMutableArray *possibleInvalidations;
@property (retain, nonatomic) NSMutableDictionary *pendingInvalidations;
@property (nonatomic) _Bool invalidationDispatched;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SXLayoutInvalidationManagerDelegate> delegate;

- (void)mightInvalidateComponent:(id)arg1;
- (void)cancelPendingInvalidationForComponent:(id)arg1;
- (id)invalidateComponent:(id)arg1;
- (id)invalidateComponent:(id)arg1 suggestedSize:(struct CGSize)arg2;
- (id)invalidateComponent:(id)arg1 suggestedSize:(struct CGSize)arg2 priority:(unsigned long long)arg3;
- (id)initWithBlueprintProvider:(id)arg1;
- (void)invalidateQueuedComponents;

@end
