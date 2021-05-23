/*
 Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol DAFolderChangeConsumer;

@interface DAFolderChange : NSObject

{
    _Bool _renameOnCollision;
    unsigned int _taskId;
    unsigned long long _changeType;
    NSString *_folderId;
    NSString *_parentFolderId;
    NSString *_displayName;
    long long _dataclass;
    id <DAFolderChangeConsumer> _consumer;
}

@property (nonatomic) unsigned long long changeType;
@property (retain, nonatomic) NSString *folderId;
@property (retain, nonatomic) NSString *parentFolderId;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) long long dataclass;
@property (nonatomic) unsigned int taskId;
@property (nonatomic) _Bool renameOnCollision;
@property (weak, nonatomic) id <DAFolderChangeConsumer> consumer;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initFolderChangeWithChangeType:(unsigned long long)arg1 folderId:(id)arg2 parentFolderId:(id)arg3 displayName:(id)arg4 dataclass:(long long)arg5 consumer:(id)arg6;

@end
