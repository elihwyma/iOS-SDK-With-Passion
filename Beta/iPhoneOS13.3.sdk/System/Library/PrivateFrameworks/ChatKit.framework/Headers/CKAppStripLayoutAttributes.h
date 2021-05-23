/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UICollectionViewLayoutAttributes.h>

__attribute__((visibility("hidden")))
@interface CKAppStripLayoutAttributes : UICollectionViewLayoutAttributes

{
    _Bool _showsBorder;
    long long _appStripSize;
}

@property (nonatomic) long long appStripSize;
@property (nonatomic) _Bool showsBorder;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
