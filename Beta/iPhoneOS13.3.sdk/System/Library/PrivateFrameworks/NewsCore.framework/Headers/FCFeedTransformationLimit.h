/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSString;

@interface FCFeedTransformationLimit : NSObject <Swift>

{
    unsigned long long _limit;
}

@property (nonatomic) unsigned long long limit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)transformationWithLimit:(unsigned long long)arg1;

- (id)transformFeedItems:(id)arg1;

@end
