/*
 Image: /System/Library/PrivateFrameworks/C2.framework/C2
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface C2Route : NSObject

{
    NSString *_destination;
    double _lastUpdated;
}

@property (retain, nonatomic) NSString *destination;
@property (nonatomic) double lastUpdated;

@end
