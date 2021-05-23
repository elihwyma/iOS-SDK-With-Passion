/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WFSplitTextIntentHandler : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)handleSplitText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveTextForSplitText:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveSeparatorForSplitText:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveCustomSeparatorForSplitText:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
