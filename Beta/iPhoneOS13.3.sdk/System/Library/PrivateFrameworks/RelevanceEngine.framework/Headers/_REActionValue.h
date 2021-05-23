/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSet, REDonatedAction;

@interface _REActionValue : NSObject

{
    NSMutableSet *_mutableUUIDs;
    REDonatedAction *_action;
}

@property (nonatomic, readonly) REDonatedAction *action;
@property (nonatomic, readonly) NSSet *uuids;

- (void)addAction:(id)arg1;
- (id)initWithAction:(id)arg1;
- (void)removeActionWithUUID:(id)arg1;

@end
