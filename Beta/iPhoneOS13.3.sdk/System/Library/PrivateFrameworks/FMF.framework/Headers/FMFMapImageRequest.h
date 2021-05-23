/*
 Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

#import <Foundation/NSObject.h>

@class CLLocation, NSString;

@interface FMFMapImageRequest : NSObject

{
    _Bool _cachingEnabled;
    CLLocation *_location;
    double _altitude;
    double _pitch;
    double _width;
    double _height;
    long long _priority;
}

@property (retain, nonatomic) CLLocation *location;
@property (nonatomic) double altitude;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic) double pitch;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) _Bool cachingEnabled;
@property (nonatomic) long long priority;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 width:(double)arg4 height:(double)arg5 andCachingEnabled:(_Bool)arg6;

@end
