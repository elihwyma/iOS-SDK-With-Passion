/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@protocol FPXEnumerator;

__attribute__((visibility("hidden")))
@interface _FPAccessControlCollection

{
    id <FPXEnumerator> _enumerator;
}

- (id)description;
- (id)createDataSourceWithSortDescriptors:(id)arg1;
- (id)initWithEnumerator:(id)arg1;

@end
