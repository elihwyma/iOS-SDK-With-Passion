/*
 Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

#import <SpotlightServices/PRSQueryTask.h>

@class PARSession, PARTask, SFSearchSuggestion;

@interface PRSCoreParsecQueryTask : PRSQueryTask

{
    PARSession *_parSession;
    _Bool _parsecEnabled;
    unsigned long long _whyQuery;
    SFSearchSuggestion *_suggestion;
    PARTask *_task;
}

@property (retain, nonatomic) SFSearchSuggestion *suggestion;
@property (retain) PARTask *task;

- (void)resume;
- (void)handleResults:(id)arg1;
- (_Bool)needsBag;
- (void)setParsecState:(_Bool)arg1;
- (id)initWithSession:(id)arg1 parsecSession:(id)arg2 handler:(id)arg3 queue:(id)arg4 scaleFactor:(double)arg5 queryIdent:(unsigned long long)arg6 whyQuery:(unsigned long long)arg7;

@end
