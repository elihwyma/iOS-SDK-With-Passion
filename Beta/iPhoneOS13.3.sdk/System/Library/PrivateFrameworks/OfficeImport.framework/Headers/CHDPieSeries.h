/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CHDSeries.h>

__attribute__((visibility("hidden")))
@interface CHDPieSeries : CHDSeries

{
    int mExplosion;
}

- (id)init;
- (id)shallowCopy;
- (int)explosion;
- (void)setExplosion:(int)arg1;

@end
