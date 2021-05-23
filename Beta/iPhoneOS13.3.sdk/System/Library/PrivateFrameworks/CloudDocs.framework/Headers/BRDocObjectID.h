/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <CloudDocs/BRFileObjectID.h>

@interface BRDocObjectID : BRFileObjectID

{
    unsigned int _docID;
}

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)asString;
- (_Bool)isDocumentID;
- (id)documentID;
- (unsigned long long)rawID;
- (id)initWithDocID:(unsigned int)arg1;
- (id)initWithDocIDNumber:(id)arg1;

@end
