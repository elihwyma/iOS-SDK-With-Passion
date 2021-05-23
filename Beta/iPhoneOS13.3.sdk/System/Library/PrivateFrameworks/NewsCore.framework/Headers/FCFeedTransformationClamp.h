/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class FCFeedRange, NSString;

@interface FCFeedTransformationClamp : NSObject <Swift>

{
    FCFeedRange *_feedRange;
}

@property (retain, nonatomic) FCFeedRange *feedRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)transformationWithDateRange:(id)arg1;
+ (id)transformationWithFeedRange:(id)arg1;

- (id)transformFeedItems:(id)arg1;

@end
