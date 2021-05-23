/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface OADConnection : NSObject

{
    unsigned int mDrawableId;
    int mLocationIndex;
}

- (id)description;
- (int)locationIndex;
- (void)setLocationIndex:(int)arg1;
- (unsigned int)drawableId;
- (void)setDrawableId:(unsigned int)arg1;

@end
