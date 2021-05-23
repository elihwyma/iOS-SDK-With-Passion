/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CPInterval : NSObject

{
    double left;
    double right;
}

- (double)left;
- (_Bool)contains:(id)arg1;
- (double)right;
- (_Bool)intersects:(id)arg1;
- (void)add:(id)arg1;
- (id)initLeft:(double)arg1 right:(double)arg2;

@end
