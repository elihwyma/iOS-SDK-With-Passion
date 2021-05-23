/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NTFeedTransformationLimit : NSObject

{
    unsigned long long _limit;
}

@property (nonatomic) unsigned long long limit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithLimit:(unsigned long long)arg1;
- (id)transformFeedItems:(id)arg1;

@end
