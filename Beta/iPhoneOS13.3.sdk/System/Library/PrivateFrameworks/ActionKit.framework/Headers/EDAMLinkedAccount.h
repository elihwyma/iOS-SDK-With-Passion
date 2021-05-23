/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMLinkedAccount : FATObject

{
    NSNumber *_inAccountUserId;
    NSString *_shardId;
    NSString *_guid;
    NSNumber *_updateSequenceNum;
    NSString *_noteStoreUrl;
    NSString *_webApiUrlPrefix;
}

@property (retain, nonatomic) NSNumber *inAccountUserId;
@property (retain, nonatomic) NSString *shardId;
@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSNumber *updateSequenceNum;
@property (retain, nonatomic) NSString *noteStoreUrl;
@property (retain, nonatomic) NSString *webApiUrlPrefix;

+ (id)structName;
+ (id)structFields;

@end
