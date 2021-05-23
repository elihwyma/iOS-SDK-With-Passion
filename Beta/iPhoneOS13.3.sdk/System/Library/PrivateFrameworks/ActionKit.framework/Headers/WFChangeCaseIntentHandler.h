/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WFChangeCaseIntentHandler : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)handleChangeCase:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveTextForChangeCase:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveTypeForChangeCase:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)stringByApplyingSentenceCaseToString:(id)arg1 withLocale:(id)arg2;
- (id)stringByApplyingTitleCaseToString:(id)arg1;
- (id)stringByApplyingAlternatingCaseToString:(id)arg1;

@end
