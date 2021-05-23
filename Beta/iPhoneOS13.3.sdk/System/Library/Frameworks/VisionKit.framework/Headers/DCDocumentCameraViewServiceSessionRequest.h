/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <Foundation/NSObject.h>

@class DCSandboxExtension, NSString;

__attribute__((visibility("hidden")))
@interface DCDocumentCameraViewServiceSessionRequest : NSObject

{
    NSString *_appName;
    DCSandboxExtension *_cachesDirectorySandboxExtension;
}

@property (nonatomic, readonly) NSString *appName;
@property (nonatomic, readonly) DCSandboxExtension *cachesDirectorySandboxExtension;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
