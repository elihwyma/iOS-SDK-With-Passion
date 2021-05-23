/*
 Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

#import <Foundation/NSURL.h>

@interface NSURL (GSExtensions)

- (id)gs_issueExtension:(const char *)arg1 error:(id *)arg2;
- (id)gs_issueReadExtensionIfNeededForAuditToken:(CDStruct_6ad76789)arg1;
- (id)gs_URLByUpdatingPathExtensionWithPathOrURL:(id)arg1;
- (void)chmod:(unsigned short)arg1;

@end
