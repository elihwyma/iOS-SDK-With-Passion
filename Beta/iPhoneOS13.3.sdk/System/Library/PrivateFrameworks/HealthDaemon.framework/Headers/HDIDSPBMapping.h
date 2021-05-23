/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@interface HDIDSPBMapping : NSObject

{
    Class _requestClass;
    Class _responseClass;
}

@property (retain, nonatomic) Class requestClass;
@property (retain, nonatomic) Class responseClass;

@end
