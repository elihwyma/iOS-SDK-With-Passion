/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <CloudKit/CKOperation.h>

@class NSString;

@interface CKOperation (IC)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)ic_loggingValues;
- (id)ic_loggingIdentifier;
- (void)ic_removeAllCompletionBlocks;

@end
