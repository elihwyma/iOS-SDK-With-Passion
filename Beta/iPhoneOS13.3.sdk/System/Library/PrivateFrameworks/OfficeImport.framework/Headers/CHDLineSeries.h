/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CHDSeries.h>

@class CHDMarker, NSString;

__attribute__((visibility("hidden")))
@interface CHDLineSeries : CHDSeries

{
    CHDMarker *mMarker;
    _Bool mSmooth;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)marker;
- (id)initWithChart:(id)arg1;
- (void)setMarker:(id)arg1;
- (void)setSmooth:(_Bool)arg1;
- (_Bool)isSmooth;

@end
