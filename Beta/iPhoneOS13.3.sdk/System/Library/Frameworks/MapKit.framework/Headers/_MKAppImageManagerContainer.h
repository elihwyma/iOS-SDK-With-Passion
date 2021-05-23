/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSMutableData, NSString;

__attribute__((visibility("hidden")))
@interface _MKAppImageManagerContainer : NSObject

{
    CDUnknownBlockType _completionHandler;
    NSMutableData *_data;
    NSString *_urlString;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (copy, nonatomic) NSString *urlString;
@property (retain, nonatomic) NSMutableData *data;

@end
