/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
 */

#import <Foundation/NSObject.h>

@class SGModelSampler, SGModelSource, SGQuickResponsesConfig;

@protocol PMLTransformerProtocol;

@interface SGQuickResponsesTransformerInstance : NSObject

{
    SGQuickResponsesConfig *_config;
    id <PMLTransformerProtocol> _featurizer;
    SGModelSource *_source;
    id <PMLTransformerProtocol> _labeler;
    SGModelSampler *_sampler;
}

@property (nonatomic, readonly) SGQuickResponsesConfig *config;
@property (nonatomic, readonly) id <PMLTransformerProtocol> featurizer;
@property (nonatomic, readonly) SGModelSource *source;
@property (nonatomic, readonly) id <PMLTransformerProtocol> labeler;
@property (nonatomic, readonly) SGModelSampler *sampler;

- (id)initWithConfig:(id)arg1 featurizer:(id)arg2 source:(id)arg3 labeler:(id)arg4 sampler:(id)arg5;

@end
