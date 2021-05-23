/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPDownloadInfo

{
    _Bool _recursively;
}

@property (nonatomic) _Bool recursively;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
