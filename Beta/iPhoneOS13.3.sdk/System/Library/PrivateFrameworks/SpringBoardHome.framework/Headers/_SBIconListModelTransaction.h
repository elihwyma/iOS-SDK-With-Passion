/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

@interface _SBIconListModelTransaction : NSObject

{
    NSMutableSet *_addedNodeIdentifiers;
    NSMutableSet *_deletedNodeIdentifiers;
    NSString *_requestID;
}

@property (copy, nonatomic, readonly) NSString *requestID;

- (id)initWithRequestID:(id)arg1;
- (void)addNodeIdentifiers:(id)arg1;
- (void)removeNodeIdentifiers:(id)arg1;
- (void)commitChangesToObservers:(id)arg1 forNode:(id)arg2;

@end
