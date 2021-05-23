/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@interface FCRecordSourceFetchContext : NSObject

{
    _Bool _refresh;
    unsigned long long _cachePolicy;
    double _maxCachedAge;
}

@property (nonatomic) _Bool refresh;
@property (nonatomic) unsigned long long cachePolicy;
@property (nonatomic) double maxCachedAge;

@end
