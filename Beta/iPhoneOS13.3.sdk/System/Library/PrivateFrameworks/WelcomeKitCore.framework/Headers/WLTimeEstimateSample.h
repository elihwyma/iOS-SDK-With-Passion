/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSObject.h>

@class NSDate;

@protocol NSObject;

@interface WLTimeEstimateSample : NSObject

{
    unsigned long long _estimate;
    NSDate *_startDate;
    unsigned long long _threshold;
    id <NSObject> _associatedObject;
}

@property (nonatomic) unsigned long long estimate;
@property (retain, nonatomic) NSDate *startDate;
@property (nonatomic) unsigned long long threshold;
@property (retain, nonatomic) id <NSObject> associatedObject;

@end
