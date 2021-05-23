/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Foundation/NSObject.h>

@class NWEndpoint, NWParameters, NWPath;

@protocol OS_nw_path_evaluator;

@interface NWPathEvaluator : NSObject

{
    NWEndpoint *_endpoint;
    NSObject<OS_nw_path_evaluator> *_internalEvaluator;
    NWPath *_internalPath;
    NWParameters *_parameters;
}

@property (readonly) NSObject<OS_nw_path_evaluator> *internalEvaluator;
@property (retain) NWPath *internalPath;
@property (readonly) NWParameters *parameters;
@property (nonatomic, readonly) NWPath *path;
@property (nonatomic, readonly) NWEndpoint *endpoint;

+ (void)initialize;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)copySavedPathEvaluatorForEndpoint:(id)arg1 parameters:(id)arg2;
+ (void)savePathEvaluator:(id)arg1;
+ (id)sharedDefaultEvaluator;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2;
- (id)initWithEvaluator:(id)arg1 parameters:(id)arg2;
- (id)initWithBrowseDescriptor:(id)arg1 parameters:(id)arg2;
- (id)initWithListenParameters:(id)arg1;
- (id)copyPath;
- (void)triggerPathAgentsIncludingVoluntary:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)satisfyPathAgentsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)triggerVoluntaryPathAgentsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)requestNexus;
- (_Bool)matchesEndpoint:(id)arg1 parameters:(id)arg2;

@end
