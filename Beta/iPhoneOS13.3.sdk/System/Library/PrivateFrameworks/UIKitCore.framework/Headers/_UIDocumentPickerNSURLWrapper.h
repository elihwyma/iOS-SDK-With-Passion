/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSData, NSURL;

@interface _UIDocumentPickerNSURLWrapper : NSObject <Swift>

{
    NSURL *_url;
    NSURL *_promiseURL;
    NSData *_scope;
    NSData *_promiseScope;
}

@property (copy, nonatomic) NSURL *url;
@property (retain) NSURL *promiseURL;
@property (retain) NSData *scope;
@property (retain) NSData *promiseScope;

+ (_Bool)supportsSecureCoding;
+ (id)wrapperWithURL:(id)arg1 createSandboxIfNoneAttached:(_Bool)arg2;
+ (id)wrapperForExportWithURL:(id)arg1 error:(id *)arg2;
+ (void)assembleURL:(id)arg1 sandbox:(id)arg2 physicalURL:(id)arg3 physicalSandbox:(id)arg4;
+ (id)wrapperWithURL:(id)arg1;
+ (id)wrapperWithURL:(id)arg1 readonly:(_Bool)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
