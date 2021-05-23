/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSPointerArray, NSString, SXViewport;

@interface SXAdDocumentStateManager : NSObject

{
    SXViewport *_viewport;
    NSPointerArray *_observers;
}

@property (nonatomic, readonly) SXViewport *viewport;
@property (nonatomic, readonly) NSPointerArray *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)addObserver:(id)arg1;
- (id)initWithViewport:(id)arg1;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;

@end
