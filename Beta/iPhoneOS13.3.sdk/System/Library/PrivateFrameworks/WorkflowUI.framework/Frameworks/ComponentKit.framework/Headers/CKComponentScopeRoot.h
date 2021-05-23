/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@class CKComponentScopeFrame, NSHashTable;

@protocol CKComponentStateListener;

@interface CKComponentScopeRoot : NSObject

{
    struct unordered_multimap<CKComponentAnnouncedEvent, CKComponentController *, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const CKComponentAnnouncedEvent, CKComponentController *>>> _eventRegistration;
    NSHashTable *_boundsAnimationComponents;
    int _globalIdentifier;
    id <CKComponentStateListener> _listener;
    CKComponentScopeFrame *_rootFrame;
}

@property (weak, nonatomic, readonly) id <CKComponentStateListener> listener;
@property (nonatomic, readonly) int globalIdentifier;
@property (nonatomic, readonly) CKComponentScopeFrame *rootFrame;

+ (id)rootWithListener:(id)arg1;

- (id).cxx_construct;
- (void)registerAnnounceableEventsForController:(id)arg1;
- (void)registerBoundsAnimationComponent:(id)arg1;
- (id)newRoot;
- (id)initWithListener:(id)arg1 globalIdentifier:(int)arg2;
- (void)announceEventToControllers:(unsigned long long)arg1;
- (id)boundsAnimationComponents;
- (struct CKComponentBoundsAnimation)boundsAnimationFromPreviousScopeRoot:(id)arg1;

@end
