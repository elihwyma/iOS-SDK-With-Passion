/*
 Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

#import <Foundation/NSString.h>

@interface NSString (GSExtensions)

+ (id)gs_stringWithFileSystemRepresentation:(const char *)arg1;

- (_Bool)validateGSName:(out id *)arg1;
- (id)gs_stringByUpdatingPathExtensionWithPathOrURL:(id)arg1;
- (_Bool)validateGSNameAllowingDot:(_Bool)arg1 error:(id *)arg2;
- (id)gs_issueExtension:(const char *)arg1 error:(id *)arg2;
- (id)gs_issueReadExtensionIfNeededForAuditToken:(CDStruct_6ad76789)arg1;
- (void)chmod:(unsigned short)arg1;

@end
