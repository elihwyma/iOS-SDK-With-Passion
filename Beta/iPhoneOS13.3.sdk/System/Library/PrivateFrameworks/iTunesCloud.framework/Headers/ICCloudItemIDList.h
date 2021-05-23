/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSMutableArray;

@interface ICCloudItemIDList : NSObject <Swift>

{
    NSMutableArray *_itemIDs;
    NSMutableArray *_idTypes;
}

@property (nonatomic, readonly) unsigned long long count;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addCloudItemID:(unsigned long long)arg1 idType:(long long)arg2;
- (void)insertCloudItemID:(unsigned long long)arg1 idType:(long long)arg2 atIndex:(unsigned long long)arg3;
- (void)enumerateCloudItemIDsUsingBlock:(CDUnknownBlockType)arg1;

@end
