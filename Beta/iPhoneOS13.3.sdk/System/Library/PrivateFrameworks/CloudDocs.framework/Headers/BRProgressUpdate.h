/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <Foundation/NSObject.h>

@class BRFileObjectID, NSArray;

@interface BRProgressUpdate : NSObject

{
    BRFileObjectID *_folderID;
    unsigned long long _uploadCompletedSize;
    unsigned long long _uploadTotalSize;
    unsigned long long _downloadCompletedSize;
    unsigned long long _downloadTotalSize;
    NSArray *_parentFileIDs;
}

@property (copy, nonatomic) BRFileObjectID *folderID;
@property (nonatomic) unsigned long long uploadCompletedSize;
@property (nonatomic) unsigned long long uploadTotalSize;
@property (nonatomic) unsigned long long downloadCompletedSize;
@property (nonatomic) unsigned long long downloadTotalSize;
@property (copy, nonatomic) NSArray *parentFileIDs;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
