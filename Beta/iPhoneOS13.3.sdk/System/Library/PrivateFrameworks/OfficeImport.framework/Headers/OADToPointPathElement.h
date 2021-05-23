/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADPathElement.h>

__attribute__((visibility("hidden")))
@interface OADToPointPathElement : OADPathElement

{
    struct OADAdjustPoint mToPoint;
    _Bool mRelative;
}

- (struct OADAdjustPoint)toPoint;
- (id)initWithToPoint:(struct OADAdjustPoint)arg1;
- (_Bool)relative;
- (void)setRelative:(_Bool)arg1;

@end
