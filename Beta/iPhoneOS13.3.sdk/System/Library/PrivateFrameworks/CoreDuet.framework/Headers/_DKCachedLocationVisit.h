/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _DKCachedLocationVisit : NSObject

{
    double _entryTime;
    double _exitTime;
    NSString *_locationId;
}

@property (nonatomic) double entryTime;
@property (nonatomic) double exitTime;
@property (retain, nonatomic) NSString *locationId;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isEqualToVisit:(id)arg1;

@end
