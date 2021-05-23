/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSArray.h>

@class NSString;

@interface NSArray (CKDUploadAssetsOperationAdditions)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)CKSortedForUpload;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;

@end
