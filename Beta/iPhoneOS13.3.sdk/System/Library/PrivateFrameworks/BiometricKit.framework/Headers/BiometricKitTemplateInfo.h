/*
 Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

#import <NSObject.h>

@class NSArray, NSDictionary;

@interface BiometricKitTemplateInfo : NSObject

{
    NSArray *_topology;
    NSDictionary *_details;
}

@property (retain, nonatomic) NSArray *topology;
@property (retain, nonatomic) NSDictionary *details;

- (id)init;
- (void)dealloc;

@end
