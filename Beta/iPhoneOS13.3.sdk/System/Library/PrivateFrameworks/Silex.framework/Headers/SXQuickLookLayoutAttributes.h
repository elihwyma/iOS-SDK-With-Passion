/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@interface SXQuickLookLayoutAttributes : NSObject

{
    struct CGRect _thumbnailFrame;
    struct CGRect _errorLabelFrame;
}

@property (nonatomic, readonly) struct CGRect thumbnailFrame;
@property (nonatomic, readonly) struct CGRect errorLabelFrame;

- (id)initWithThumbnailFrame:(struct CGRect)arg1 errorLabelFrame:(struct CGRect)arg2;

@end
