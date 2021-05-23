/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <CloudDocs/BRFileObjectID.h>

@interface BRInodeObjectID : BRFileObjectID

{
    unsigned long long _ino;
}

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)folderID;
- (id)initWithFileID:(unsigned long long)arg1;
- (id)asString;
- (unsigned long long)rawID;
- (_Bool)isFolderOrAliasID;

@end
