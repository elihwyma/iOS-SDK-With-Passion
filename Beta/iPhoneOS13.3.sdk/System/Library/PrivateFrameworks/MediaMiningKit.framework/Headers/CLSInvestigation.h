/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class CLSClueCollection, CLSInspector, CLSInvestigationFeeder, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@protocol CLSInvestigationDelegate, CLSInvestigationInterviewDelegate;

@interface CLSInvestigation : NSObject

{
    NSString *_uuid;
    id _context;
    CLSInvestigationFeeder *_feeder;
    id <CLSInvestigationDelegate> _delegate;
    id <CLSInvestigationInterviewDelegate> _interviewDelegate;
    NSMutableArray *_profiles;
    CLSInspector *_inspector;
    CLSClueCollection *_clueCollection;
    unsigned long long _precision;
    NSArray *_informants;
    NSMutableDictionary *_tracesLogsByURIs;
    NSMutableArray *_tracesLogsURIs;
    _Bool _enableDebuggingClues;
    struct {
        unsigned int delegateWillBegin:1;
        unsigned int delegateDidEnd:1;
        unsigned int delegateNumberOfItems:1;
        unsigned int delegateSampleOfItems:1;
        unsigned int delegateItemThumbnailAtIndexWithResolution:1;
    } _investigationFlags;
}

@property (retain, nonatomic, readonly) CLSInvestigationFeeder *feeder;
@property _Bool enableDebuggingClues;
@property (copy, nonatomic, readonly) NSString *uuid;
@property (retain, nonatomic, readonly) NSArray *profiles;
@property (weak, nonatomic) id <CLSInvestigationDelegate> delegate;
@property (weak, nonatomic) id <CLSInvestigationInterviewDelegate> interviewDelegate;
@property (retain, nonatomic) id context;
@property (retain, readonly) CLSClueCollection *clueCollection;
@property (weak, nonatomic, readonly) CLSInspector *inspector;
@property (nonatomic) unsigned long long precision;

+ (id)investigationWithProfiles:(id)arg1;
+ (id)investigationWithProfiles:(id)arg1 clueDates:(id)arg2 clueLocations:(id)arg3 cluePeoples:(id)arg4;

- (id)init;
- (id)description;
- (unsigned long long)numberOfItems;
- (id)initWithProfiles:(id)arg1;
- (id)description:(_Bool)arg1;
- (id)itemThumbnailAtIndex:(unsigned long long)arg1 withResolution:(unsigned long long)arg2;
- (id)initWithClueCollection:(id)arg1 profiles:(id)arg2;
- (id)initWithFeeder:(id)arg1 profiles:(id)arg2;
- (void)_willBeginInvestigation:(id)arg1;
- (void)_didEndInvestigation:(_Bool)arg1;
- (id)sampleOfItems;
- (void)addTraceFromObject:(id)arg1 feature:(id)arg2 type:(unsigned long long)arg3 context:(id)arg4 withDescriptionFormat:(id)arg5;
- (id)_traceStringForType:(unsigned long long)arg1;
- (id)tracesDescription;

@end
