/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface FSNode : NSObject

{
    NSURL *_url;
    unsigned long long _cacheExpiration;
    unsigned int _isDirectory:2;
    unsigned int _hasReferringAliasNode:1;
    unsigned int _canUseFileCache:1;
    unsigned int _isInitialized:1;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) FSNode *referringAliasNode;
@property (nonatomic, readonly, getter=isDirectory) _Bool directory;
@property (nonatomic, readonly, getter=isBusyDirectory) _Bool busyDirectory;
@property (nonatomic, readonly, getter=isExecutable) _Bool executable;
@property (nonatomic, readonly, getter=isResolvable) _Bool resolvable;
@property (nonatomic, readonly, getter=isSymbolicLink) _Bool symbolicLink;
@property (nonatomic, readonly, getter=isAliasFile) _Bool aliasFile;
@property (nonatomic, readonly, getter=isSideFault) _Bool sideFault;
@property (nonatomic, readonly) _Bool hasPackageBit;
@property (nonatomic, readonly, getter=isRegularFile) _Bool regularFile;
@property (nonatomic, readonly, getter=isHidden) _Bool hidden;
@property (nonatomic, readonly) _Bool hasHiddenExtension;
@property (nonatomic, readonly, getter=isVolume) _Bool volume;
@property (nonatomic, readonly, getter=isMountTrigger) _Bool mountTrigger;
@property (nonatomic, readonly, getter=isOnDiskImage) _Bool onDiskImage;
@property (nonatomic, readonly, getter=isOnLocalVolume) _Bool onLocalVolume;

+ (_Bool)supportsSecureCoding;
+ (id)pathForBookmarkData:(id)arg1 error:(id *)arg2;
+ (id)rootVolumeNode;
+ (id)_resolvedURLFromAliasFile:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;
+ (id)_resolvedNodeFromAliasFile:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;
+ (_Bool)canWriteURL:(id)arg1 fromSandboxWithAuditToken:(const CDStruct_4c969caf *)arg2;
+ (_Bool)canReadMetadataOfURL:(id)arg1 fromSandboxWithAuditToken:(const CDStruct_4c969caf *)arg2;
+ (_Bool)canAccessURL:(id)arg1 fromSandboxWithAuditToken:(const CDStruct_4c969caf *)arg2 operation:(const char *)arg3;
+ (_Bool)getFileSystemRepresentation:(char [1024])arg1 forBookmarkData:(id)arg2;
+ (unsigned char)compareBookmarkData:(id)arg1 toBookmarkData:(id)arg2;
+ (id)nameForBookmarkData:(id)arg1 error:(id *)arg2;
+ (_Bool)getVolumeIdentifier:(unsigned long long *)arg1 forBookmarkData:(id)arg2 error:(id *)arg3;
+ (_Bool)isBookmarkDataFull:(id)arg1;
+ (id)systemDataVolumeNode;
+ (_Bool)canReadURL:(id)arg1 fromSandboxWithAuditToken:(const CDStruct_4c969caf *)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)removeCachedResourceValueForKey:(id)arg1;
- (void)setTemporaryResourceValue:(id)arg1 forKey:(id)arg2;
- (_Bool)checkResourceIsReachableAndReturnError:(id *)arg1;
- (_Bool)getFinderInfo:(CDUnion_739f5cf2 *)arg1 error:(id *)arg2;
- (_Bool)setFinderInfo:(const CDUnion_739f5cf2 *)arg1 error:(id *)arg2;
- (void)prepareForReuse;
- (id)nameWithError:(id *)arg1;
- (id)initWithURL:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;
- (_Bool)getContentModificationDate:(double *)arg1 error:(id *)arg2;
- (id)initTemporaryNodeOnVolume:(id)arg1 flags:(unsigned int)arg2 fileDescriptor:(int *)arg3 error:(id *)arg4;
- (id)childNodeWithRelativePath:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;
- (struct __CFBundle *)CFBundleWithError:(id *)arg1;
- (_Bool)setResourceValue:(id)arg1 forKey:(id)arg2 options:(unsigned char)arg3 error:(id *)arg4;
- (_Bool)getFileSystemRepresentation:(char [1024])arg1 error:(id *)arg2;
- (id)canonicalPathWithError:(id *)arg1;
- (id)volumeNodeWithFlags:(unsigned int)arg1 error:(id *)arg2;
- (id)resolvedNodeWithFlags:(unsigned int)arg1 error:(id *)arg2;
- (void)setReferringAliasNode:(id)arg1;
- (id)initWithFileSystemRepresentation:(const char *)arg1 flags:(unsigned int)arg2 error:(id *)arg3;
- (id)temporaryDirectoryNodeWithFlags:(unsigned int)arg1 error:(id *)arg2;
- (id)initWithDirectory:(unsigned long long)arg1 inDomain:(unsigned long long)arg2 lastPathComponent:(id)arg3 createIntermediateDirectories:(_Bool)arg4 flags:(unsigned int)arg5 error:(id *)arg6;
- (id)initWithConfigurationString:(int)arg1 flags:(unsigned int)arg2 error:(id *)arg3;
- (void)clearURLPropertyCacheIfStale;
- (_Bool)getFileIdentifier:(unsigned long long *)arg1 error:(id *)arg2;
- (_Bool)getTemporaryResourceValue:(id *)arg1 forKey:(id)arg2;
- (id)sideFaultResourceValuesReturningError:(id *)arg1;
- (id)diskImageURLWithFlags:(unsigned int)arg1 error:(id *)arg2;
- (_Bool)getHFSType:(unsigned int *)arg1 creator:(unsigned int *)arg2 error:(id *)arg3;
- (_Bool)getIsDirectory_NoIO:(_Bool *)arg1;
- (id)canonical:(_Bool)arg1 pathWithError:(id *)arg2;
- (_Bool)getVolumeIdentifier:(unsigned long long *)arg1 error:(id *)arg2;
- (_Bool)getDeviceNumber:(int *)arg1 error:(id *)arg2;
- (_Bool)getInodeNumber:(unsigned long long *)arg1 error:(id *)arg2;
- (_Bool)getOwnerUID:(unsigned int *)arg1 error:(id *)arg2;
- (_Bool)canReadFromSandboxWithAuditToken:(const CDStruct_4c969caf *)arg1;
- (id)bundleIdentifierWithContext:(struct LSContext *)arg1 error:(id *)arg2;
- (id)bundleIdentifierWithError:(id *)arg1;
- (_Bool)getCreationDate:(double *)arg1 error:(id *)arg2;
- (_Bool)getLength:(unsigned long long *)arg1 error:(id *)arg2;
- (_Bool)getWriterBundleIdentifier:(id *)arg1 error:(id *)arg2;
- (_Bool)canWriteFromSandboxWithAuditToken:(const CDStruct_4c969caf *)arg1;
- (_Bool)canReadMetadataFromSandboxWithAuditToken:(const CDStruct_4c969caf *)arg1;
- (id)extendedAttributeWithName:(id)arg1 options:(int)arg2 error:(id *)arg3;
- (_Bool)setExtendedAttribute:(id)arg1 name:(id)arg2 options:(int)arg3 error:(id *)arg4;
- (id)bookmarkDataWithOptions:(unsigned long long)arg1 relativeToNode:(id)arg2 error:(id *)arg3;
- (id)initByResolvingBookmarkData:(id)arg1 options:(unsigned long long)arg2 relativeToNode:(id)arg3 bookmarkDataIsStale:(_Bool *)arg4 error:(id *)arg5;
- (id)bookmarkDataRelativeToNode:(id)arg1 error:(id *)arg2;
- (id)initByResolvingBookmarkData:(id)arg1 relativeToNode:(id)arg2 bookmarkDataIsStale:(_Bool *)arg3 error:(id *)arg4;
- (id)pathWithError:(id *)arg1;
- (id)extensionWithError:(id *)arg1;
- (_Bool)getResourceValue:(id *)arg1 forKey:(id)arg2 options:(unsigned char)arg3 error:(id *)arg4;
- (id)bundleInfoDictionaryWithError:(id *)arg1;
- (id)initWithPath:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;

@end
