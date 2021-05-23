/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCCurrentIssuesCheckerResult, NSArray;

@interface FCCurrentIssuesPromiseChainingData : NSObject

{
    NSArray *_resultingIssues;
    NSArray *_followedTagIDs;
    NSArray *_autoFavoriteTagIDs;
    FCCurrentIssuesCheckerResult *_partialResult;
}

@property (retain, nonatomic) NSArray *resultingIssues;
@property (retain, nonatomic) NSArray *followedTagIDs;
@property (retain, nonatomic) NSArray *autoFavoriteTagIDs;
@property (retain, nonatomic) FCCurrentIssuesCheckerResult *partialResult;

@end
