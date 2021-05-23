/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@class NSData, NSSet, NSString;

@interface CRKOpenFilesRequest : CATTaskRequest

{
    _Bool _autoAccept;
    NSSet *_fileItems;
    NSString *_senderName;
    NSData *_previewImageData;
    NSString *_sourceBundleIdentifier;
}

@property (copy, nonatomic) NSSet *fileItems;
@property (copy, nonatomic) NSString *senderName;
@property (copy, nonatomic) NSData *previewImageData;
@property (nonatomic) _Bool autoAccept;
@property (copy, nonatomic) NSString *sourceBundleIdentifier;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
