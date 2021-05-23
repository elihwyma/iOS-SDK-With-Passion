/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

@class INIntent, INIntentResponse, NSDictionary;

@interface INIntentTestResult : NSObject

{
    _Bool _resolvedAllParametersSuccesfully;
    INIntent *_resolvedIntent;
    NSDictionary *_resolvedParameters;
    INIntentResponse *_confirmResponse;
    INIntentResponse *_handleResponse;
}

@property (nonatomic, readonly) INIntent *resolvedIntent;
@property (copy, nonatomic, readonly) NSDictionary *resolvedParameters;
@property (nonatomic, readonly) _Bool resolvedAllParametersSuccesfully;
@property (nonatomic, readonly) INIntentResponse *confirmResponse;
@property (nonatomic, readonly) INIntentResponse *handleResponse;

- (id)description;
- (id)dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)initWithResolvedIntent:(id)arg1 resolvedParameters:(id)arg2 resolvedAllParametersSuccesfully:(_Bool)arg3 confirmResponse:(id)arg4 handleResponse:(id)arg5;

@end
