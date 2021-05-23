/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString;

@interface GEOPowerAssertion : NSObject

{
    NSString *_identifier;
    double _timeout;
    unsigned int _assertion;
    long long _type;
}

- (void)dealloc;
- (id)description;
- (id)initWithType:(long long)arg1 identifier:(id)arg2 timeout:(double)arg3;

@end
