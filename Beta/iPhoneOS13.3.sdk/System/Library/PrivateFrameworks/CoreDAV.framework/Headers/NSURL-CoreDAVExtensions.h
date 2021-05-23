/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <Foundation/NSURL.h>

@interface NSURL (CoreDAVExtensions)

+ (id)CDVDefaultPortForScheme:(id)arg1;
+ (id)CDVURLWithScheme:(id)arg1 host:(id)arg2 port:(id)arg3 path:(id)arg4;
+ (id)CDVURLWithScheme:(id)arg1 user:(id)arg2 password:(id)arg3 host:(id)arg4 port:(id)arg5 path:(id)arg6;

- (id)CDVURLWithUser:(id)arg1;
- (_Bool)CDVIsEqualToURL:(id)arg1;
- (id)CDVRawPath;
- (id)CDVURLWithPath:(id)arg1;
- (_Bool)CDVIsSafeRedirectForRequestURL:(id)arg1;
- (id)CDVURLByDeletingLastPathComponent;
- (id)CDVfixedURLByAppendingPathComponent:(id)arg1;
- (id)CDVServerURL;
- (id)CDVRawLastPathComponent;
- (id)CDVURLWithPassword:(id)arg1;
- (id)initWithCDVScheme:(id)arg1 user:(id)arg2 password:(id)arg3 host:(id)arg4 port:(id)arg5 path:(id)arg6 query:(id)arg7 fragment:(id)arg8;
- (id)CDVURLWithScheme:(id)arg1 userandpass:(id)arg2 host:(id)arg3 port:(id)arg4 path:(id)arg5 parameters:(id)arg6 encodePercents:(_Bool)arg7;
- (id)CDVPassword;
- (id)initWithCDVScheme:(id)arg1 user:(id)arg2 password:(id)arg3 host:(id)arg4 port:(id)arg5 path:(id)arg6 parameterString:(id)arg7 query:(id)arg8 fragment:(id)arg9;
- (id)CDVRawLastPathComponentPreservingEscapes;
- (id)CDVServerURLWithPath:(_Bool)arg1;
- (id)CDVFileSystemSafePath;

@end
