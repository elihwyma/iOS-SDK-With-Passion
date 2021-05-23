/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PSIDate : NSObject

{
    long long _int64Representation;
    long long _int64RepresentationMask;
}

@property (readonly) long long era;
@property (readonly) long long year;
@property (readonly) long long month;
@property (readonly) long long day;
@property (readonly) long long int64Representation;
@property (readonly) long long int64RepresentationMask;

+ (id)distantFuture;
+ (id)distantPast;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)dateComponents;
- (id)initWithUniversalDate:(id)arg1 calendar:(id)arg2;
- (id)initWithDateComponents:(id)arg1;
- (id)initWithInt64Representation:(long long)arg1;

@end
