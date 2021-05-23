/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <Foundation/NSObject.h>

@class NSExtension, NSNumber, NSString;

@interface DKDiagnosticAttributes : NSObject

{
    _Bool _headless;
    _Bool _restricted;
    _Bool _requiresUnlock;
    NSExtension *_extension;
    struct NSString *_bundleIdentifier;
    NSNumber *_identifier;
    NSString *_name;
    NSString *_version;
    NSNumber *_freeSpaceRequired;
}

@property (nonatomic, readonly) NSNumber *identifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *version;
@property (nonatomic, readonly) NSNumber *freeSpaceRequired;
@property (nonatomic, readonly, getter=isHeadless) _Bool headless;
@property (nonatomic, readonly, getter=isRestricted) _Bool restricted;
@property (nonatomic, readonly) _Bool requiresUnlock;
@property (nonatomic, readonly) NSExtension *extension;
@property (nonatomic, readonly) NSString *bundleIdentifier;

- (id)initWithExtension:(id)arg1;
- (id)initWithIdentifier:(id)arg1 version:(id)arg2 freeSpaceRequired:(id)arg3 name:(id)arg4 headless:(_Bool)arg5;

@end
