/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

@class NSData, NSNumber, NSString;

@interface NSURL : NSObject

{
    NSString *_urlString;
    NSURL *_baseURL;
    void *_clients;
    void *_reserved;
}

@property (copy, readonly) NSData *dataRepresentation;
@property (copy, readonly) NSString *absoluteString;
@property (copy, readonly) NSString *relativeString;
@property (copy, readonly) NSURL *baseURL;
@property (copy, readonly) NSURL *absoluteURL;
@property (copy, readonly) NSString *scheme;
@property (copy, readonly) NSString *resourceSpecifier;
@property (copy, readonly) NSString *host;
@property (copy, readonly) NSNumber *port;
@property (copy, readonly) NSString *user;
@property (copy, readonly) NSString *password;
@property (copy, readonly) NSString *path;
@property (copy, readonly) NSString *fragment;
@property (copy, readonly) NSString *parameterString;
@property (copy, readonly) NSString *query;
@property (copy, readonly) NSString *relativePath;
@property (readonly) _Bool hasDirectoryPath;
@property (readonly) const char *fileSystemRepresentation;
@property (readonly, getter=isFileURL) _Bool fileURL;
@property (copy, readonly) NSURL *standardizedURL;
@property (copy, readonly) NSURL *filePathURL;

+ (_Bool)supportsSecureCoding;
+ (id)__unurl;
+ (id)resourceValuesForKeys:(id)arg1 fromBookmarkData:(id)arg2;
+ (_Bool)writeBookmarkData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
+ (id)bookmarkDataWithContentsOfURL:(id)arg1 error:(id *)arg2;

- (_Bool)isFileReferenceURL;
- (_Bool)getResourceValue:(out id *)arg1 forKey:(id)arg2 error:(out id *)arg3;
- (id)resourceValuesForKeys:(id)arg1 error:(id *)arg2;
- (_Bool)setResourceValue:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (_Bool)setResourceValues:(id)arg1 error:(id *)arg2;
- (void)removeCachedResourceValueForKey:(id)arg1;
- (void)removeAllCachedResourceValues;
- (void)setTemporaryResourceValue:(id)arg1 forKey:(id)arg2;
- (_Bool)checkResourceIsReachableAndReturnError:(id *)arg1;
- (id)fileReferenceURL;
- (id)bookmarkDataWithOptions:(unsigned long long)arg1 includingResourceValuesForKeys:(id)arg2 relativeToURL:(id)arg3 error:(id *)arg4;
- (id)bookmarkDataWithAliasRecord:(id)arg1;
- (_Bool)startAccessingSecurityScopedResource;
- (void)stopAccessingSecurityScopedResource;

@end
