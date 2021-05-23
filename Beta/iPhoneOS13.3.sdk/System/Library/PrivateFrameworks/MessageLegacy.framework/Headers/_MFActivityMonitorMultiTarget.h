/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@interface _MFActivityMonitorMultiTarget : NSObject

{
    id _primaryTarget;
    NSMutableSet *_allTargets;
}

- (void)dealloc;
- (id)displayName;
- (id)allTargets;
- (_Bool)addActivityTarget:(id)arg1;
- (_Bool)removeActivityTarget:(id)arg1;
- (id)primaryTarget;
- (void)setPrimaryTarget:(id)arg1;

@end
