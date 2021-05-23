/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@interface WBSFormAutoFillParsecCrowdsourcedCorrectionsProcessor : NSObject

+ (id)_schemaWithExpectedClass:(Class)arg1 errorCode:(long long)arg2 isOptional:(_Bool)arg3;
+ (id)_correctionsSchema;
+ (id)test_correctionsSchema;

- (id)_correctionsStore;
- (void)getLastCorrectionsRetrievalURLStringWithResultHandler:(CDUnknownBlockType)arg1;
- (void)setCorrectionsWithJSONData:(id)arg1 retrievalURLString:(id)arg2;

@end
