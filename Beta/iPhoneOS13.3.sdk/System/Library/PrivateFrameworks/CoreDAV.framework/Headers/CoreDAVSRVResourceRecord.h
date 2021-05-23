/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface CoreDAVSRVResourceRecord : NSObject

{
    NSString *_serviceString;
    NSNumber *_priority;
    NSNumber *_weight;
    NSNumber *_port;
    NSString *_target;
}

@property (retain, nonatomic) NSString *serviceString;
@property (retain, nonatomic) NSNumber *priority;
@property (retain, nonatomic) NSNumber *weight;
@property (retain, nonatomic) NSNumber *port;
@property (retain, nonatomic) NSString *target;

- (id)description;

@end
