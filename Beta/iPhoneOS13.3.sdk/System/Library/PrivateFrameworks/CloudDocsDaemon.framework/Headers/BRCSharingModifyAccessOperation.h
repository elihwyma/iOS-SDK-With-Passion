/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>

@class BRCDocumentItem, NSData, NSString;

__attribute__((visibility("hidden")))
@interface BRCSharingModifyAccessOperation : _BRCFrameworkOperation

{
    BRCDocumentItem *_document;
    _Bool _allowAccess;
    NSData *_accessToken;
    NSString *_referenceIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)main;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)createActivity;
- (id)initWithItem:(id)arg1 allowAccess:(_Bool)arg2;

@end
