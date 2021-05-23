/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <Foundation/NSObject.h>

@class DEDBugSession, DEDExtensionIdentifier, NSArray, NSString, NSURL;

@interface DEDAttachmentGroup : NSObject

{
    DEDBugSession *_fromBugSession;
    NSString *_deviceID;
    NSURL *_rootURL;
    NSString *_displayName;
    NSString *_extensionID;
    NSArray *_attachmentItems;
    DEDExtensionIdentifier *_dedExtensionIdentifier;
}

@property (retain, nonatomic) DEDExtensionIdentifier *dedExtensionIdentifier;
@property (retain) DEDBugSession *fromBugSession;
@property (retain) NSString *deviceID;
@property (retain) NSURL *rootURL;
@property (retain) NSString *displayName;
@property (retain) NSString *extensionID;
@property (retain) NSArray *attachmentItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)archivedClasses;
+ (id)groupWithDictionary:(id)arg1;
+ (id)groupWithDEGroup:(id)arg1 identifier:(id)arg2;

- (id)serialize;
- (_Bool)isLocal;
- (id)archiveName;
- (id)totalFilesize;

@end
