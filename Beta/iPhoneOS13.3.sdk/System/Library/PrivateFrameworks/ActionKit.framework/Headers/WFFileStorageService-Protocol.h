/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/Swift-Protocol.h>

@class NSString;

@protocol WFFileStorageService <Swift>

@property (nonatomic, readonly) Class objectRepresentationClass;
@property (nonatomic, readonly) Class accessResourceClass;
@property (nonatomic, readonly) NSString *storageLocationPrefix;
@property (nonatomic, readonly) _Bool hasPublicURLs;
@property (nonatomic, readonly) _Bool supportsJumpingToSubdirectoryInUI;

+ (unsigned short)serviceName;
+ (unsigned short)resultItemClass;

- (unsigned short)retrieveFilesAtPath:options:progress:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)saveFiles:toPath:options:progress:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getSharingURLsForFiles:usePublicURLs:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteFiles:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)createFolderAtPath:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)appendText:toPath:options:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)searchFiles:inPath:completionHandler: /* Error: Ran out of types for this method. */;

@end
