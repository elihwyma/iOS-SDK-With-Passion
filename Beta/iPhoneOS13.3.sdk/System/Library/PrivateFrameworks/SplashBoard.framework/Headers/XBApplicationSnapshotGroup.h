/*
 Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSet, NSString, XBSnapshotContainerIdentity;

@interface XBApplicationSnapshotGroup : NSObject

{
    NSString *_identifier;
    XBSnapshotContainerIdentity *_containerIdentity;
    NSMutableSet *_snapshots;
}

@property (copy) XBSnapshotContainerIdentity *containerIdentity;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *containerPath;
@property (copy, nonatomic, readonly) NSSet *snapshots;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)_invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)_commonInit;
- (void)addSnapshot:(id)arg1;
- (void)_manifestQueueDecode_setStore:(id)arg1;
- (_Bool)_validateWithContainerIdentity:(id)arg1;
- (_Bool)removeSnapshot:(id)arg1;
- (id)_initWithIdentifier:(id)arg1 containerIdentity:(id)arg2;

@end
