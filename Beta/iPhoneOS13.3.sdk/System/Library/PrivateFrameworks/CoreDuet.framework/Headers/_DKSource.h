/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface _DKSource : NSObject

{
    NSString *_sourceID;
    NSString *_bundleID;
    NSString *_itemID;
    NSString *_groupID;
    NSString *_deviceID;
    NSNumber *_userID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSString *syncDeviceID;
@property (retain) NSString *deviceID;
@property (retain) NSNumber *userID;
@property (readonly) NSString *sourceID;
@property (readonly) NSString *bundleID;
@property (readonly) NSString *itemID;
@property (readonly) NSString *groupID;

+ (_Bool)supportsSecureCoding;
+ (id)fromPBCodable:(id)arg1;
+ (id)defaultSourceID;
+ (id)intentsSourceID;
+ (id)sourceForInteraction:(id)arg1 bundleID:(id)arg2;
+ (id)sourceForSearchableItem:(id)arg1 bundleID:(id)arg2;
+ (id)entityName;
+ (id)spotlightSourceID;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toPBCodable;
- (id)initWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 itemIdentifier:(id)arg3 groupIdentifier:(id)arg4 deviceIdentifier:(id)arg5 userIdentifier:(id)arg6;

@end
