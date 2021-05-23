/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WBSCyclerCreateBookmarkOperation : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)executeWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_createRandomLeafWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_createRandomListWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_randomListWithContext:(id)arg1;

@end
