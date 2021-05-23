/*
 Image: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface PAMediaConversionServiceResourceURLCollection : NSObject

{
    NSMutableDictionary *_urlReferencesByRole;
}

@property (retain) NSMutableDictionary *urlReferencesByRole;
@property (readonly) unsigned long long urlCount;
@property (readonly) _Bool allURLsAreReadable;

+ (id)collectionWithMainResourceURL:(id)arg1;
+ (id)collectionForBookmarkDataDictionaryRepresentation:(id)arg1 error:(id *)arg2;

- (id)init;
- (void)setResourceURL:(id)arg1 forRole:(id)arg2;
- (id)resourceURLForRole:(id)arg1;
- (void)setResourceURL:(id)arg1 forRole:(id)arg2 deleteOnDeallocation:(_Bool)arg3;
- (void)setShouldDeleteURLOnDeallocation:(_Bool)arg1 forRole:(id)arg2;
- (_Bool)containsAllRoles:(id)arg1;
- (_Bool)containsAnyRole:(id)arg1;
- (id)typeIdentifierForResourceURLWithRole:(id)arg1;
- (id)bookmarkDataDictionaryRepresentationWithError:(id *)arg1;
- (_Bool)ensureFilesExistWithError:(id *)arg1;
- (_Bool)removeExistingEmptyFilesWithError:(id *)arg1;
- (id)logMessageSummary;
- (id)fileSizeSummary;
- (void)enumerateResourceURLs:(CDUnknownBlockType)arg1;
- (id)urlForDebugDumpWithDirectoryName:(id)arg1 inExistingParentDirectory:(id)arg2 error:(id *)arg3;
- (_Bool)copyURL:(id)arg1 forRole:(id)arg2 toDirectory:(id)arg3 error:(id *)arg4;

@end
