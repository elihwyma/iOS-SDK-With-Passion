/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/MTLModel.h>

@class NSDate, NSDictionary, NSNumber, NSString, NSURL;

@interface WFWunderlistFile : MTLModel

{
    long long _fileId;
    long long _taskId;
    long long _listId;
    long long _userId;
    NSURL *_url;
    NSString *_filename;
    NSNumber *_fileSize;
    NSDate *_localCreatedAt;
    NSDate *_createdAt;
    NSDate *_updatedAt;
    long long _revision;
}

@property (nonatomic, readonly) long long fileId;
@property (nonatomic, readonly) long long taskId;
@property (nonatomic, readonly) long long listId;
@property (nonatomic, readonly) long long userId;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) NSNumber *fileSize;
@property (nonatomic, readonly) NSDate *localCreatedAt;
@property (nonatomic, readonly) NSDate *createdAt;
@property (nonatomic, readonly) NSDate *updatedAt;
@property (nonatomic, readonly) long long revision;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryValue;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)urlJSONTransformer;
+ (id)createdAtJSONTransformer;
+ (id)updatedAtJSONTransformer;
+ (id)localCreatedAtJSONTransformer;

@end
