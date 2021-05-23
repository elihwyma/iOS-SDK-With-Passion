/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSMutableData, NSString;

@interface _HKAppImageManagerContainer : NSObject

{
    CDUnknownBlockType _completionHandler;
    NSString *_urlString;
    NSMutableData *_data;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (copy, nonatomic) NSString *urlString;
@property (retain, nonatomic) NSMutableData *data;

@end
