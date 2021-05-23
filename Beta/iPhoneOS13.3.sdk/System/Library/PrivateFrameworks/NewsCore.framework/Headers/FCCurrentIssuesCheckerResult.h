/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSError;

@interface FCCurrentIssuesCheckerResult : NSObject

{
    NSArray *_followedIssues;
    NSArray *_unreadFollowedIssues;
    NSArray *_autoFavoriteIssues;
    NSArray *_unbadgedIssues;
    NSError *_error;
}

@property (retain, nonatomic) NSArray *followedIssues;
@property (retain, nonatomic) NSArray *unreadFollowedIssues;
@property (retain, nonatomic) NSArray *autoFavoriteIssues;
@property (retain, nonatomic) NSArray *unbadgedIssues;
@property (retain, nonatomic) NSError *error;

@end
