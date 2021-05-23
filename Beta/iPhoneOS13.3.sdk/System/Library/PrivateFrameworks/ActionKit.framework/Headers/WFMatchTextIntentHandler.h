/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WFMatchTextIntentHandler : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)handleMatchText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveTextForMatchText:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolvePatternForMatchText:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveCaseSensitiveForMatchText:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
