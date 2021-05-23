/*
 Image: /System/Library/PrivateFrameworks/OSAnalyticsPrivate.framework/OSAnalyticsPrivate
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface OSASubmissionPolicy : NSObject

{
    NSArray *_default_template;
    NSArray *_primary_template;
    NSArray *_specific_files;
    NSString *_identifier;
    NSDictionary *_prefaces;
    NSMutableDictionary *_policies;
    NSMutableDictionary *_cadenceThrottleCache;
    NSMutableDictionary *_results;
    _Bool _permissive;
    _Bool _ignoreProxies;
    _Bool _usingCellular;
    _Bool _hasTasking;
}

@property _Bool permissive;
@property _Bool ignoreProxies;
@property _Bool usingCellular;
@property (readonly) _Bool hasTasking;
@property (readonly) NSDictionary *latestResults;

+ (CDStruct_2815125f)guardingWindow;

- (id)init;
- (void)persist;
- (_Bool)pastDue;
- (id)_loadPreviousResults;
- (id)getCadence:(id)arg1;
- (_Bool)shouldConsiderCadence:(id)arg1;
- (double)secondsAgo:(id)arg1;
- (id)shouldSubmitRouting:(id)arg1;
- (id)initWithTemplate:(id)arg1 options:(id)arg2;
- (double)intervalForCadence:(id)arg1;
- (id)buildSubmissionTemplateForConfig:(id)arg1;
- (void)registerRouting:(id)arg1 result:(_Bool)arg2;
- (CDStruct_2815125f)calcNextWindow;

@end
