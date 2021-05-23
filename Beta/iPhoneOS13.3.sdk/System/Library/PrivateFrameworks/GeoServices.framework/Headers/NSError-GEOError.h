/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSError.h>

@interface NSError (GEOError)

@property (nonatomic, readonly) _Bool _geo_isXPCInterruptedError;

+ (id)GEOErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)GEOErrorWithCode:(long long)arg1 reason:(id)arg2;
+ (id)GEOErrorWithCode:(long long)arg1 reason:(id)arg2 underlyingError:(id)arg3;
+ (id)geo_insufficientFilesystemCapacityWithBytesNeeded:(unsigned long long)arg1 bytesAvailable:(unsigned long long)arg2;
+ (id)zilchDecoderErrorForNoSolution;
+ (id)_geo_errorFromXPCData:(id)arg1;
+ (id)_geo_errorFromXPCError:(id)arg1;

- (id)zilchDecoderTileLoadingError;
- (id)_geo_newXPCData;

@end
