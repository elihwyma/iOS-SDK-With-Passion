/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelLibraryRequest.h>

@class NSArray, NSString;

@interface MPModelLibrarySearchRequest : MPModelLibraryRequest

{
    NSArray *_scopes;
    long long _maximumResultsPerScope;
    NSString *_searchString;
}

@property (copy, nonatomic) NSArray *scopes;
@property (nonatomic) long long maximumResultsPerScope;
@property (copy, nonatomic) NSString *searchString;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;

@end
