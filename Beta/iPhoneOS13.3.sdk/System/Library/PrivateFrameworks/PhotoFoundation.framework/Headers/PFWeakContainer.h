/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@class _PFWeakContainerSentenal;

@interface PFWeakContainer : NSObject

{
    _PFWeakContainerSentenal *_sentenal;
    id _nilNotificationDelegate;
}

- (id)init;
- (void)dealloc;
- (void)weakReferenceBecameNil;
- (_Bool)isTrackingWeakObjectDealloc:(id)arg1;
- (void)trackWeakObjectDealloc:(id)arg1;
- (void)stopTrackingWeakObjectDealloc:(id)arg1;
- (void)setNilNotificationDelegate:(id)arg1;

@end
