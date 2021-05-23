/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCSingleTagFeedDescriptor.h>

@interface FCTestFeedDescriptor : FCSingleTagFeedDescriptor

{
    _Bool _disableGroupMerging;
    _Bool _disableFiltering;
    _Bool _enableSingletonGroups;
}

@property (nonatomic) _Bool disableGroupMerging;
@property (nonatomic) _Bool disableFiltering;
@property (nonatomic) _Bool enableSingletonGroups;

+ (id)descriptorWithContext:(id)arg1;
+ (id)descriptorWithContext:(id)arg1 tag:(id)arg2;

- (id)feedGroupEmittersWithConfiguration:(id)arg1 forYouConfig:(id)arg2;
- (id)allEmitterClasses;

@end
