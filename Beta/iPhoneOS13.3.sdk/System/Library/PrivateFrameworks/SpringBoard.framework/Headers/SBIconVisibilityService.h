/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSLock, NSSet, SBIconModel;

@interface SBIconVisibilityService : NSObject

{
    SBIconModel *_iconModel;
    NSLock *_iconStateDisplayIdentifiersLock;
    NSSet *_iconStateDisplayIdentifiers;
}

- (void)dealloc;
- (id)iconStateDisplayIdentifiers;
- (id)initWithIconModel:(id)arg1;
- (void)_visibleIdentifiersChanged:(id)arg1;

@end
