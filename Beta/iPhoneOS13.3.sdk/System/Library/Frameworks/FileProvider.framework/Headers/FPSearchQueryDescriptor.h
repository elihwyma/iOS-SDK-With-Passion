/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@class NSString;

__attribute__((visibility("hidden")))
@interface FPSearchQueryDescriptor

{
    NSString *_searchQueryString;
}

@property (copy) NSString *searchQueryString;

- (unsigned long long)hash;
- (id)_scopes;
- (id)queryStringForMountPoint:(id)arg1;
- (_Bool)keepCollectorsAlive;
- (void)augmentQueryContext:(id)arg1;
- (_Bool)isEqualToItemQueryDescriptor:(id)arg1;

@end
