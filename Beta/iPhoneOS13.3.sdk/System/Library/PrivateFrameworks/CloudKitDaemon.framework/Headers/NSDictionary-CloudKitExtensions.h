/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSDictionary.h>

@class NSString;

@interface NSDictionary (CloudKitExtensions)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)CKObjectForKeyCaseInsensitive:(id)arg1;
- (id)CKPercentEscapedQueryString;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;

@end
