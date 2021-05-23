/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber, NSString, NSURL;

@interface DEDAttachmentItem : NSObject

{
    NSString *_deviceID;
    NSString *_displayName;
    NSDate *_modificationDate;
    NSNumber *_fileSize;
    NSURL *_attachedPath;
}

@property (retain) NSString *deviceID;
@property (retain) NSString *displayName;
@property (retain) NSDate *modificationDate;
@property (retain) NSNumber *fileSize;
@property (retain) NSURL *attachedPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)archivedClasses;
+ (id)itemWithDictionary:(id)arg1;
+ (id)itemWithDEItem:(id)arg1;
+ (id)itemWithURL:(id)arg1;

- (id)serialize;
- (_Bool)isLocal;

@end
