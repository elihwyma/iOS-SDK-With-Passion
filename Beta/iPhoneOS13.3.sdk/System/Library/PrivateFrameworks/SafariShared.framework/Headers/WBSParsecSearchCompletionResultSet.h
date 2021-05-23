/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface WBSParsecSearchCompletionResultSet : NSObject

{
    NSArray *_patternStrings;
    NSMutableDictionary *_patternStringsToPatterns;
    NSString *_status;
    NSString *_errorCodeString;
    NSString *_completionString;
    NSString *_prefix;
    NSString *_feedbackQueryIdentifier;
    NSArray *_results;
    double _maxAge;
    double _completionScore;
}

@property (copy, nonatomic) NSString *status;
@property (nonatomic, readonly) NSString *errorCodeString;
@property (nonatomic, readonly) NSString *completionString;
@property (nonatomic, readonly) NSString *prefix;
@property (nonatomic, readonly) NSString *feedbackQueryIdentifier;
@property (nonatomic, readonly) NSArray *results;
@property (nonatomic, readonly) double maxAge;
@property (nonatomic, readonly) double completionScore;

+ (id)resultSetSchemaWithCache:(id)arg1;
+ (id)resultSetWithDictionary:(id)arg1 cache:(id)arg2;

- (id)_initWithDictionary:(id)arg1 cache:(id)arg2;
- (void)enumeratePatternsUsingBlock:(CDUnknownBlockType)arg1;

@end
