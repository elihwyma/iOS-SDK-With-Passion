/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString;

@interface ASDUpdatePollMetrics : NSObject

{
    NSDate *_pollTime;
    NSString *_reason;
    NSArray *_bundleIDs;
}

@property (copy, nonatomic) NSDate *pollTime;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSArray *bundleIDs;

- (id)description;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;

@end
