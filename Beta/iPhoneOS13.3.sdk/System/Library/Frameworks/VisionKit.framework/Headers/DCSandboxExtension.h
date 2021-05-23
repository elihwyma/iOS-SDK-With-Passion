/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <Foundation/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface DCSandboxExtension : NSObject

{
    _Bool _canAccessFileURL;
    _Bool _shouldIssueSandboxExtensionWhenEncoding;
    NSURL *_fileURL;
    long long _sandboxExtensionHandle;
}

@property (nonatomic, readonly) _Bool shouldIssueSandboxExtensionWhenEncoding;
@property (nonatomic) long long sandboxExtensionHandle;
@property (nonatomic, readonly) _Bool canAccessFileURL;
@property (nonatomic, readonly) NSURL *fileURL;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)relinquish;
- (id)initWithFileURL:(id)arg1;

@end
