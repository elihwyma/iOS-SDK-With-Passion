/*
 Image: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
 */

#import <Foundation/NSObject.h>

@class FPItem, NSData, NSURL;

@interface PBSecurityScopedURLWrapper : NSObject

{
    NSData *_scope;
    _Bool _readonly;
    _Bool _backedByFileProvider;
    NSURL *_url;
    FPItem *_fpItem;
    NSURL *_deleteAfterUseURL;
}

@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly, getter=isReadonly) _Bool readonly;
@property (nonatomic, readonly, getter=isBackedByFileProvider) _Bool backedByFileProvider;
@property (nonatomic, readonly) FPItem *fpItem;
@property (retain, nonatomic) NSURL *deleteAfterUseURL;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 readonly:(_Bool)arg2;
- (id)initWithURL:(id)arg1 readonly:(_Bool)arg2 extensionClass:(id)arg3;
- (id)initWithFPItem:(id)arg1;
- (id)nsURLWrapper;
- (id)initWithNSURLWrapper:(id)arg1;
- (void)_deleteTemporaryFilesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)deleteTemporaryFilesWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
