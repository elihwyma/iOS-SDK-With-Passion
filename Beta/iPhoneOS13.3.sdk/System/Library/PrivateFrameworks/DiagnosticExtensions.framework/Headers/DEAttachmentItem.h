/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber, NSString, NSURL;

@interface DEAttachmentItem : NSObject

{
    NSString *_displayName;
    NSURL *_path;
    NSDate *_modificationDate;
    NSNumber *_filesize;
    NSNumber *_shouldCompress;
    NSURL *_attachedPath;
    NSString *_attachmentType;
    NSNumber *_deleteOnAttach;
}

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSURL *path;
@property (retain, nonatomic) NSDate *modificationDate;
@property (retain, nonatomic) NSNumber *filesize;
@property (retain, nonatomic) NSNumber *shouldCompress;
@property (retain, nonatomic) NSURL *attachedPath;
@property (copy, nonatomic) NSString *attachmentType;
@property (copy, nonatomic) NSNumber *deleteOnAttach;

+ (_Bool)supportsSecureCoding;
+ (id)attachmentWithPath:(id)arg1 withDisplayName:(id)arg2 modificationDate:(id)arg3 andFilesize:(id)arg4;
+ (id)attachmentWithPath:(id)arg1;
+ (id)attachmentWithPathURL:(id)arg1;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(id)arg1;
- (void)detach;
- (id)attachToDestinationDir:(id)arg1;
- (id)initWithPathURL:(id)arg1;
- (id)initWithPath:(id)arg1 withDisplayName:(id)arg2 modificationDate:(id)arg3 andFilesize:(id)arg4;

@end
