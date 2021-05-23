/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSFileManager.h>

@interface IMFileManager : NSFileManager

+ (id)defaultManager;
+ (id)defaultHFSFileManager;

- (id)MIMETypeOfPathExtension:(id)arg1;
- (id)displayNameOfFileWithName:(id)arg1 hfsFlags:(unsigned short)arg2;
- (id)pathExtensionForMIMEType:(id)arg1;
- (id)UTITypeOfMimeType:(id)arg1;
- (id)MIMETypeOfPath:(id)arg1;
- (id)pathExtensionForUTIType:(id)arg1;
- (id)UTITypeOfPath:(id)arg1;
- (id)UTITypeOfPathExtension:(id)arg1;

@end
