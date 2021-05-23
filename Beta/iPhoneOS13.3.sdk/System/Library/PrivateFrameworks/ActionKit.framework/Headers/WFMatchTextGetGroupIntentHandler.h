/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WFMatchTextGetGroupIntentHandler : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)handleMatchTextGetGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveMatchesForMatchTextGetGroup:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveTypeForMatchTextGetGroup:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveGroupIndexForMatchTextGetGroup:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)matchedTextInString:(id)arg1 withResult:(id)arg2 atIndex:(long long)arg3;

@end
