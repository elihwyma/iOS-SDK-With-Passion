/*
 Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface HSCloudItemIDList : NSObject

{
    NSMutableArray *_itemIDs;
    NSMutableArray *_idTypes;
}

@property (nonatomic, readonly) unsigned long long count;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addCloudItemID:(unsigned long long)arg1 idType:(long long)arg2;
- (void)insertCloudItemID:(unsigned long long)arg1 idType:(long long)arg2 atIndex:(unsigned long long)arg3;
- (void)enumerateCloudItemIDsUsingBlock:(CDUnknownBlockType)arg1;

@end
