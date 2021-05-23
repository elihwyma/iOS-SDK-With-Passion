/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface DAMailboxFetchSearchResultRequest : NSObject

{
    int _bodyFormat;
    int _maxSize;
    NSString *_longID;
    NSString *_folderID;
    NSString *_serverID;
}

@property (copy, nonatomic) NSString *longID;
@property (copy, nonatomic) NSString *folderID;
@property (copy, nonatomic) NSString *serverID;
@property (nonatomic) int bodyFormat;
@property (nonatomic) int maxSize;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initRequestForBodyFormat:(int)arg1 withFolderID:(id)arg2 withServerID:(id)arg3 withLongID:(id)arg4 withBodySizeLimit:(int)arg5;
- (id)initRequestForBodyFormat:(int)arg1 withLongID:(id)arg2 withBodySizeLimit:(int)arg3;

@end
