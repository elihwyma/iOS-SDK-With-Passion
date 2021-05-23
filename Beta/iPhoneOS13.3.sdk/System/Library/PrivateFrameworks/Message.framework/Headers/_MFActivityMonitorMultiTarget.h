/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@interface _MFActivityMonitorMultiTarget : NSObject

{
    id _primaryTarget;
    NSMutableSet *_allTargets;
}

- (id)displayName;
- (id)allTargets;
- (_Bool)addActivityTarget:(id)arg1;
- (_Bool)removeActivityTarget:(id)arg1;
- (id)primaryTarget;
- (void)setPrimaryTarget:(id)arg1;

@end
