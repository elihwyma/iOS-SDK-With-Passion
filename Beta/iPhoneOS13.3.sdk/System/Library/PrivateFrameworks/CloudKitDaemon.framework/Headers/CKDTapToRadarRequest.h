/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDTapToRadarRequest : NSObject

{
    NSString *_message;
    NSString *_uuid;
    NSString *_componentName;
    NSString *_componentVersion;
    NSString *_componentID;
    NSString *_relatedRadar;
}

@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *componentName;
@property (retain, nonatomic) NSString *componentVersion;
@property (retain, nonatomic) NSString *componentID;
@property (retain, nonatomic) NSString *relatedRadar;

@end
