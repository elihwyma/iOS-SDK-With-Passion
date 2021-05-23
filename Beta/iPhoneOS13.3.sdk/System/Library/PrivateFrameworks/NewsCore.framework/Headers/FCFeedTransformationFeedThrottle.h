/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSString;

@interface FCFeedTransformationFeedThrottle : NSObject <Swift>

{
    NSString *_feedID;
    unsigned long long _limit;
}

@property (copy, nonatomic) NSString *feedID;
@property (nonatomic) unsigned long long limit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)transformationWithFeedID:(id)arg1 limit:(unsigned long long)arg2;

- (id)transformFeedItems:(id)arg1;

@end
