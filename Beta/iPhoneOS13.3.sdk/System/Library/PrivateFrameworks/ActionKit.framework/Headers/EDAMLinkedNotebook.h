/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMLinkedNotebook : FATObject

{
    NSString *_shareName;
    NSString *_username;
    NSString *_shardId;
    NSString *_sharedNotebookGlobalId;
    NSString *_uri;
    NSString *_guid;
    NSNumber *_updateSequenceNum;
    NSString *_noteStoreUrl;
    NSString *_webApiUrlPrefix;
    NSString *_stack;
    NSNumber *_businessId;
}

@property (retain, nonatomic) NSString *shareName;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *shardId;
@property (retain, nonatomic) NSString *sharedNotebookGlobalId;
@property (retain, nonatomic) NSString *uri;
@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSNumber *updateSequenceNum;
@property (retain, nonatomic) NSString *noteStoreUrl;
@property (retain, nonatomic) NSString *webApiUrlPrefix;
@property (retain, nonatomic) NSString *stack;
@property (retain, nonatomic) NSNumber *businessId;

+ (id)structName;
+ (id)structFields;

@end
