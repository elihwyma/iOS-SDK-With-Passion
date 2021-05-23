/*
 Image: /System/Library/PrivateFrameworks/PowerLog.framework/PowerLog
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface PLCoreDuetEvent : NSObject

{
    unsigned char _updateType;
    NSString *_bundleID;
    NSString *_processName;
    NSDictionary *_childBundleIDToWeight;
    NSArray *_eventIntervals;
}

@property (retain) NSString *bundleID;
@property unsigned char updateType;
@property (retain) NSString *processName;
@property (retain) NSDictionary *childBundleIDToWeight;
@property (retain) NSArray *eventIntervals;

- (id)description;

@end
