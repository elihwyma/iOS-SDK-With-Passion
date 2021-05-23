/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface FCFeedTransformationComposite : NSObject <Swift>

{
    _Bool _shouldLogTransformationResults;
    NSMutableArray *_transformationLogs;
    NSArray *_feedTransformations;
}

@property (copy, nonatomic) NSArray *feedTransformations;
@property (nonatomic, readonly) _Bool shouldLogTransformationResults;
@property (nonatomic, readonly) NSMutableArray *transformationLogs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)transformFeedItems:(id)arg1;
- (id)initWithFeedTransformations:(id)arg1;
- (id)initWithFeedTransformations:(id)arg1 logTransformationResults:(_Bool)arg2;

@end
