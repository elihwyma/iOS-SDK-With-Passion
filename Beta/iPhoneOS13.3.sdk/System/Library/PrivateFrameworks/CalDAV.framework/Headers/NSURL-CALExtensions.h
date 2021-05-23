/*
 Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <Foundation/NSURL.h>

@interface NSURL (CALExtensions)

+ (id)davCompatibleFilenameForFilename:(id)arg1;
+ (id)URLWithDirtyString:(id)arg1;
+ (id)iDiskSmallNameCompatibleNameForFilename:(id)arg1;
+ (int)classicPortForScheme:(id)arg1;
+ (id)URLWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 uri:(id)arg4;

- (_Bool)isEqualToURL:(id)arg1;
- (id)queryParameters;
- (id)uri;
- (id)serverURL;
- (id)URLWithUsername:(id)arg1 withPassword:(id)arg2;
- (id)initWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 path:(id)arg4;
- (id)pathWithoutTrailingRemovingSlash;
- (id)unquotedPassword;
- (id)URLWithoutUsername;
- (id)URLWithUsername:(id)arg1;
- (id)pathWithoutDecodingAndRemovingTrailingSlash;
- (id)initWithDirtyString:(id)arg1;
- (id)URLWithoutPassword;
- (_Bool)absoluteURLisEqual:(id)arg1;

@end
