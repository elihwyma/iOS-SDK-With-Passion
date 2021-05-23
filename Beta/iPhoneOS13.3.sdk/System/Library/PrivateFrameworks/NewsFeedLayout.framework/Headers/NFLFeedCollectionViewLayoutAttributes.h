/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <UIKit/UICollectionViewLayoutAttributes.h>

@interface NFLFeedCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes

{
    long long _cellType;
    long long _columnSpan;
    long long _rowSpan;
}

@property (nonatomic) long long cellType;
@property (nonatomic) long long columnSpan;
@property (nonatomic) long long rowSpan;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)protobufRepresentationnormalizedWithFeedGutter:(double)arg1;
- (void)populateWithProtobuf:(id)arg1 normalizedWithFeedGutter:(double)arg2;

@end
