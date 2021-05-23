/*
 Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

#import <SiriUICore/SUICAutoDismissalStrategy.h>

@interface SUICHandsOnAutoDismissalStrategy : SUICAutoDismissalStrategy

{
    CDUnknownBlockType _mapsNavigationStatusIsActiveBlock;
}

- (_Bool)shouldDismiss;
- (double)idleTimeInterval;
- (CDUnknownBlockType)_mapsNavigationStatusIsActiveBlock;
- (void)_setMapsNavigationStatusIsActiveBlock:(CDUnknownBlockType)arg1;

@end
