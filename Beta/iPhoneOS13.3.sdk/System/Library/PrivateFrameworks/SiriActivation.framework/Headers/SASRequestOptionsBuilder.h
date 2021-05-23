/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <Foundation/NSObject.h>

@class SASSystemState;

@interface SASRequestOptionsBuilder : NSObject

{
    SASSystemState *_systemState;
    long long _presentationIdentifier;
}

@property (retain, nonatomic) SASSystemState *systemState;
@property (nonatomic) long long presentationIdentifier;

- (_Bool)_siriIsEnabled;
- (id)_createRequestOptionsForRequest:(id)arg1 withDataSource:(id)arg2;
- (id)buildOptionsWithRequest:(id)arg1 presentationIdentifier:(long long)arg2 dataSource:(id)arg3;

@end
