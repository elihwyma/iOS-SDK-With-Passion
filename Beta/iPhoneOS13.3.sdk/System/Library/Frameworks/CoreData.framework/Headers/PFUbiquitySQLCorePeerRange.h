/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquitySQLCorePeerRange : NSObject

{
    NSString *_owningPeerID;
    NSString *_entityName;
    NSNumber *_rangeStart;
    NSNumber *_rangeEnd;
    NSNumber *_peerStart;
    NSNumber *_peerEnd;
}

@property (nonatomic, readonly) NSString *owningPeerID;
@property (nonatomic, readonly) NSString *entityName;
@property (nonatomic, readonly) NSNumber *rangeStart;
@property (nonatomic, readonly) NSNumber *rangeEnd;
@property (nonatomic, readonly) NSNumber *peerStart;
@property (nonatomic, readonly) NSNumber *peerEnd;

- (void)dealloc;
- (id)description;
- (id)initWithOwningPeerID:(id)arg1 entityName:(id)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 peerStart:(id)arg5 peerEnd:(id)arg6;

@end
