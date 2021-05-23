/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSURL.h>

@class NSArray, NSString;

@interface NSURL (NSURLPromisedItems)

@property (copy, readonly) NSArray *pathComponents;
@property (copy, readonly) NSString *lastPathComponent;
@property (copy, readonly) NSString *pathExtension;
@property (copy, readonly) NSURL *URLByDeletingLastPathComponent;
@property (copy, readonly) NSURL *URLByDeletingPathExtension;
@property (copy, readonly) NSURL *URLByStandardizingPath;
@property (copy, readonly) NSURL *URLByResolvingSymlinksInPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *writableTypeIdentifiersForItemProvider;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)fileURLWithPath:(id)arg1;
+ (id)fileURLWithPath:(id)arg1 isDirectory:(_Bool)arg2;
+ (id)fileURLWithFileSystemRepresentation:(const char *)arg1 isDirectory:(_Bool)arg2 relativeToURL:(id)arg3;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)writableTypeIdentifiersForItemProvider;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)URLWithString:(id)arg1 relativeToURL:(id)arg2;
+ (id)URLWithString:(id)arg1;
+ (id)URLByResolvingBookmarkData:(id)arg1 options:(unsigned long long)arg2 relativeToURL:(id)arg3 bookmarkDataIsStale:(_Bool *)arg4 error:(id *)arg5;
+ (id)URLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2;
+ (id)absoluteURLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2;
+ (id)fileURLWithPath:(id)arg1 isDirectory:(_Bool)arg2 relativeToURL:(id)arg3;
+ (id)fileURLWithPath:(id)arg1 relativeToURL:(id)arg2;
+ (id)URLByResolvingAliasFileAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (id)fileURLWithPathComponents:(id)arg1;
+ (id)_fileURLWithPath:(id)arg1 cachingResourceValuesForKeys:(id)arg2 error:(id *)arg3;
+ (id)_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2;
+ (id)_web_URLWithString:(id)arg1 relativeToURL:(id)arg2;
+ (id)_web_URLWithComponents:(CDStruct_4f05a0fa)arg1;
+ (id)_URLWithData:(id)arg1 relativeToURL:(id)arg2;

- (id)init;
- (unsigned long long)retainCount;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (id)retain;
- (oneway void)release;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)user;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)_cfTypeID;
- (id)initFileURLWithPath:(id)arg1;
- (id)absoluteURL;
- (id)relativeString;
- (id)baseURL;
- (id)scheme;
- (id)host;
- (id)port;
- (id)password;
- (struct __CFURL *)_cfurl;
- (id)parameterString;
- (id)query;
- (id)fragment;
- (id)initWithString:(id)arg1;
- (const char *)fileSystemRepresentation;
- (id)absoluteString;
- (id)path;
- (_Bool)isFileURL;
- (id)initFileURLWithPath:(id)arg1 isDirectory:(_Bool)arg2;
- (_Bool)getFileSystemRepresentation:(char *)arg1 maxLength:(unsigned long long)arg2;
- (long long)_promiseExtensionConsume;
- (void)_promiseExtensionRelease:(long long)arg1;
- (id)_fixedUpSideFaultError:(id)arg1;
- (void)_performWithPhysicalURL:(CDUnknownBlockType)arg1;
- (id)_valueFromFaultDictionary:(id)arg1 forKey:(id)arg2;
- (_Bool)checkPromisedItemIsReachableAndReturnError:(id *)arg1;
- (_Bool)getPromisedItemResourceValue:(out id *)arg1 forKey:(id)arg2 error:(out id *)arg3;
- (id)promisedItemResourceValuesForKeys:(id)arg1 error:(id *)arg2;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
- (id)standardizedURL;
- (void)_freeClients;
- (_Bool)_isAbsolute;
- (id)initWithString:(id)arg1 relativeToURL:(id)arg2;
- (id)initWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2;
- (id)initAbsoluteURLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2;
- (id)initFileURLWithPath:(id)arg1 isDirectory:(_Bool)arg2 relativeToURL:(id)arg3;
- (id)initFileURLWithPath:(id)arg1 relativeToURL:(id)arg2;
- (id)initFileURLWithFileSystemRepresentation:(const char *)arg1 isDirectory:(_Bool)arg2 relativeToURL:(id)arg3;
- (id)initByResolvingBookmarkData:(id)arg1 options:(unsigned long long)arg2 relativeToURL:(id)arg3 bookmarkDataIsStale:(_Bool *)arg4 error:(id *)arg5;
- (id)initByResolvingAliasFileAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (struct __CFDictionary *)_clientsCreatingIfNecessary:(_Bool)arg1;
- (id)resourceSpecifier;
- (id)initWithScheme:(id)arg1 host:(id)arg2 path:(id)arg3;
- (id)dataRepresentation;
- (id)relativePath;
- (_Bool)hasDirectoryPath;
- (id)URLByAppendingPathComponent:(id)arg1 isDirectory:(_Bool)arg2;
- (id)URLByAppendingPathComponent:(id)arg1;
- (id)URLByAppendingPathExtension:(id)arg1;
- (id)_initFileURLWithPath:(id)arg1 cachingResourceValuesForKeys:(id)arg2 error:(id *)arg3;
- (id)_URLArchive;
- (_Bool)_web_isJavaScriptURL;
- (CDStruct_4f05a0fa)_web_URLComponents;
- (id)_hostString;
- (id)_web_scriptIfJavaScriptURL;
- (id)_web_suggestedFilenameWithMIMEType:(id)arg1;
- (id)_web_URLByRemovingLastPathComponent_nowarn;
- (id)_web_URLByRemovingUserAndPath_nowarn;
- (id)_web_URLByRemovingUserAndQueryAndFragment_nowarn;
- (id)_URLByEscapingSpacesAndControlChars;

@end
