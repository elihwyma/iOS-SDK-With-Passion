/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFeedDescriptor.h>

@class NSString;

@interface FCGreatStoriesYouMissedFeedDescriptor : FCFeedDescriptor

{
    unsigned long long _limit;
}

@property (nonatomic) unsigned long long limit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)setupDebug;
+ (void)tearDownDebug;

- (id)name;
- (id)feedGroupEmittersWithConfiguration:(id)arg1 forYouConfig:(id)arg2;
- (id)allEmitterClasses;
- (id)feedPaginator;
- (id)editionAtDate:(id)arg1;
- (id)editionFollowingEdition:(id)arg1;

@end
