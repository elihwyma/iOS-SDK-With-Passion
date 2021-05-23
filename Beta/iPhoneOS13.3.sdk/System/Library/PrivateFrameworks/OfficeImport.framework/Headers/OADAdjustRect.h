/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OADAdjustRect : NSObject

{
    struct OADAdjustCoord mLeft;
    struct OADAdjustCoord mTop;
    struct OADAdjustCoord mRight;
    struct OADAdjustCoord mBottom;
}

- (id)description;
- (struct OADAdjustCoord)left;
- (struct OADAdjustCoord)top;
- (struct OADAdjustCoord)bottom;
- (struct OADAdjustCoord)right;
- (id)initWithLeft:(struct OADAdjustCoord)arg1 top:(struct OADAdjustCoord)arg2 right:(struct OADAdjustCoord)arg3 bottom:(struct OADAdjustCoord)arg4;

@end
