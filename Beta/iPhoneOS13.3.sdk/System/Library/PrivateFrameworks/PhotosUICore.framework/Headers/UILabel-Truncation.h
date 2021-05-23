/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UILabel.h>

@interface UILabel (Truncation)

+ (_Bool)px_isTruncatedForAttributedString:(id)arg1 forWidth:(double)arg2 lines:(long long)arg3;

- (_Bool)px_isTruncatedForWidth:(double)arg1 lines:(long long)arg2;
- (_Bool)px_isOneLineForWidth:(double)arg1;
- (struct CGRect)boundingRectForCharacterRange:(struct _NSRange)arg1;

@end
