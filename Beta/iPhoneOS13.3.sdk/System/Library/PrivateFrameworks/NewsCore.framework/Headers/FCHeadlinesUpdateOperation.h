/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class NSArray, NSDictionary;

@protocol FCContentContext, FCCoreConfiguration;

@interface FCHeadlinesUpdateOperation : FCOperation

{
    NSArray *_headlines;
    id <FCContentContext> _context;
    id <FCCoreConfiguration> _configuration;
    double _maxArticleAge;
    CDUnknownBlockType _updateCompletion;
    NSDictionary *_resultHeadlinesByArticleID;
}

@property (copy, nonatomic) NSDictionary *resultHeadlinesByArticleID;
@property (copy, nonatomic) NSArray *headlines;
@property (retain, nonatomic) id <FCContentContext> context;
@property (copy, nonatomic) id <FCCoreConfiguration> configuration;
@property (nonatomic) double maxArticleAge;
@property (copy, nonatomic) CDUnknownBlockType updateCompletion;

- (id)init;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;

@end
