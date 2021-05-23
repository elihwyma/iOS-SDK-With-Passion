/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WFCombineTextIntentHandler : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)handleCombineText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveTextForCombineText:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveSeparatorForCombineText:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveCustomSeparatorForCombineText:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
