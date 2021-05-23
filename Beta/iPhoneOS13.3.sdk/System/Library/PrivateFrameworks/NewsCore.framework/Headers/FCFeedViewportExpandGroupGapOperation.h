/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FCDateRange, FCFeedDescriptor, FCFeedGroup, FCFeedViewport, FCFeedViewportGap, NSArray, NSDictionary, NSError, NSMutableDictionary;

@protocol FCCoreConfiguration;

@interface FCFeedViewportExpandGroupGapOperation : FCOperation

{
    _Bool _lightweightOnly;
    id <FCCoreConfiguration> _configuration;
    FCCloudContext *_context;
    FCFeedViewport *_viewport;
    FCFeedDescriptor *_feedDescriptor;
    FCFeedViewportGap *_gap;
    unsigned long long _desiredHeadlineCount;
    long long _gapExpansionPolicy;
    CDUnknownBlockType _expandGapCompletionHandler;
    NSArray *_feedGroupEmitters;
    FCDateRange *_refreshDateRange;
    NSDictionary *_toCursorsByEmitterID;
    NSMutableDictionary *_forYouCatchUpOperationsByEdition;
    NSArray *_resultInternalElements;
    FCFeedGroup *_resultInsertedGroup;
    NSError *_resultError;
}

@property (retain, nonatomic) NSArray *feedGroupEmitters;
@property (retain, nonatomic) FCDateRange *refreshDateRange;
@property (retain, nonatomic) NSDictionary *toCursorsByEmitterID;
@property (retain, nonatomic) NSMutableDictionary *forYouCatchUpOperationsByEdition;
@property (retain, nonatomic) NSArray *resultInternalElements;
@property (retain, nonatomic) FCFeedGroup *resultInsertedGroup;
@property (retain, nonatomic) NSError *resultError;
@property (copy, nonatomic) id <FCCoreConfiguration> configuration;
@property (retain, nonatomic) FCCloudContext *context;
@property (retain, nonatomic) FCFeedViewport *viewport;
@property (retain, nonatomic) FCFeedDescriptor *feedDescriptor;
@property (copy, nonatomic) FCFeedViewportGap *gap;
@property (nonatomic) unsigned long long desiredHeadlineCount;
@property (nonatomic) long long gapExpansionPolicy;
@property _Bool lightweightOnly;
@property (copy, nonatomic) CDUnknownBlockType expandGapCompletionHandler;

- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (void)prepareOperation;
- (id)_associatedForYouCatchUpOperationForEdition:(id)arg1;
- (id)_groupsFromRefreshSessionContainingGap:(id)arg1 internalElements:(id)arg2;

@end
