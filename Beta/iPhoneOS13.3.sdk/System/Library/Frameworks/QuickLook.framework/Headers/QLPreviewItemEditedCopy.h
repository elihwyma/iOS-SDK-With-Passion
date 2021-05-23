/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@class FPSandboxingURLWrapper, NSString, NSURL, NSUUID;

@interface QLPreviewItemEditedCopy : NSObject

{
    FPSandboxingURLWrapper *_urlWrapper;
    FPSandboxingURLWrapper *_directoryURLWrapper;
    NSUUID *_uuid;
    unsigned long long _version;
}

@property (retain, nonatomic) FPSandboxingURLWrapper *urlWrapper;
@property (retain, nonatomic) FPSandboxingURLWrapper *directoryURLWrapper;
@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) unsigned long long version;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSURL *createdContainerTemporaryURL;
@property (nonatomic, readonly) NSString *outputURLContentType;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)removeFromDisk;
- (_Bool)containerStillExists;
- (id)initWithEditedCopyURL:(id)arg1 createdContainerTemporaryURL:(id)arg2;
- (id)initWithEditedCopyURL:(id)arg1;
- (void)bumpVersion;

@end
