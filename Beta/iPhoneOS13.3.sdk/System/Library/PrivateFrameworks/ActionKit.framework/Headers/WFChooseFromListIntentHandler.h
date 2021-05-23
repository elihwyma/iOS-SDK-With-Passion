/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WFChooseFromListIntentHandler : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)handleChooseFromList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolvePromptForChooseFromList:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveChosenItemsForChooseFromList:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)provideChosenItemsOptionsForChooseFromList:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
