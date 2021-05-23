/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSString;

@interface FCFeedTransformationSort : NSObject <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)transformationWithSortMethod:(long long)arg1;
+ (id)transformationWithSortMethod:(long long)arg1 configurationSet:(long long)arg2 personalizer:(id)arg3;
+ (id)transformationWithSortMethod:(long long)arg1 personalizer:(id)arg2;

- (id)transformFeedItems:(id)arg1;

@end
