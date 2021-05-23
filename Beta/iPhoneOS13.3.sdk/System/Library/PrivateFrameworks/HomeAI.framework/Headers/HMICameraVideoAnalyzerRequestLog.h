/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <HMFoundation/HMFObject.h>

@class HMICameraVideoAnalyzerRequest, NSString;

__attribute__((visibility("hidden")))
@interface HMICameraVideoAnalyzerRequestLog : HMFObject

{
    HMICameraVideoAnalyzerRequest *_request;
}

@property (weak, readonly) HMICameraVideoAnalyzerRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;

- (id)stringWithFormat:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (void)info:(id)arg1;
- (void)debug:(id)arg1;

@end
