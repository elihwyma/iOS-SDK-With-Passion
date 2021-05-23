/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/MTLModel.h>

#import <ActionKit/Swift-Protocol.h>

@class NSDate, NSDictionary, NSNumber, NSString;

@interface WFDropboxMetadata : MTLModel <Swift>

{
    NSString *_name;
    NSString *_path;
    NSString *_identifier;
    NSString *_revision;
    NSString *_contentHash;
    NSNumber *_fileSize;
    NSDate *_clientModifiedDate;
    NSDate *_serverModifiedDate;
    NSString *_itemKind;
}

@property (copy, nonatomic, readonly) NSString *wfName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSString *itemKind;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *path;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *revision;
@property (copy, nonatomic, readonly) NSString *contentHash;
@property (nonatomic, readonly) NSNumber *fileSize;
@property (nonatomic, readonly) _Bool isDirectory;
@property (nonatomic, readonly) NSDate *clientModifiedDate;
@property (nonatomic, readonly) NSDate *serverModifiedDate;
@property (copy, nonatomic, readonly) NSString *wfName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryValue;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)clientModifiedDateJSONTransformer;
+ (id)serverModifiedDateJSONTransformer;

- (_Bool)isEqual:(id)arg1;
- (id)wfFileType;
- (_Bool)wfIsDirectory;
- (id)wfPath;
- (id)wfFileSize;
- (id)wfLastModifiedDate;
- (_Bool)wfIsEqualToFile:(id)arg1;

@end
