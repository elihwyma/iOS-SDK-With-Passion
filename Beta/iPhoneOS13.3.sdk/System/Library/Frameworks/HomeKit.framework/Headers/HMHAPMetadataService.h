/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HMHAPMetadataService : NSObject

{
    NSString *_type;
    NSString *_svcDescription;
}

@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *svcDescription;

@end
