/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class EFQueue, NSMutableSet;

@interface EFResourcePool : NSObject

{
    struct os_unfair_lock_s _handleResourceLock;
    unsigned long long _uncreatedResourcesCount;
    EFQueue *_activeResources;
    NSMutableSet *_inactiveResources;
}

@property (nonatomic) unsigned long long uncreatedResourcesCount;
@property (nonatomic, readonly) EFQueue *activeResources;
@property (nonatomic, readonly) NSMutableSet *inactiveResources;

- (id)initWithCount:(unsigned long long)arg1;
- (id)acquireResource;
- (void)releaseResource:(id)arg1;

@end
