/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRFrameworkContainerHelper : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)itemIDForURL:(id)arg1 error:(id *)arg2;
- (unsigned short)br_capabilityToMoveFromURL:(id)arg1 toNewParent:(id)arg2 error:(id *)arg3;
- (id)fetchContainerForURL:(id)arg1;
- (id)fetchAllContainersByIDWithError:(id *)arg1;
- (_Bool)canFetchAllContainersByID;

@end
