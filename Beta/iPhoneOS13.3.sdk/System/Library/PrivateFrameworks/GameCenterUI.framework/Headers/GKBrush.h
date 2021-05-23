/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@interface GKBrush : NSObject

+ (id)brush;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGSize)sizeForInput:(id)arg1;
- (id)drawnImageForSize:(struct CGSize)arg1 opaque:(_Bool)arg2 input:(id)arg3;
- (double)scaleForInput:(id)arg1;
- (void)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 input:(id)arg3;

@end
