/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class ENGroupID, NSString;

@interface IDSCloudKitKeyElectionStoreItem : NSObject

{
    NSString *_groupName;
    ENGroupID *_groupID;
}

@property (retain, nonatomic) NSString *groupName;
@property (retain, nonatomic) ENGroupID *groupID;

- (id)description;

@end
