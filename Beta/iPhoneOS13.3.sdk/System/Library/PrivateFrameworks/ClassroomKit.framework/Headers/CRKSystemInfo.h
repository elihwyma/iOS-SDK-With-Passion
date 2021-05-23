/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface CRKSystemInfo : NSObject

{
    NSString *_buildVersion;
    NSString *_systemVersion;
}

@property (copy, nonatomic, readonly) NSString *buildVersion;
@property (copy, nonatomic, readonly) NSString *systemVersion;
@property (nonatomic, readonly) unsigned long long platform;
@property (copy, nonatomic, readonly) NSDate *bootDate;

+ (id)sharedSystemInfo;

- (id)init;
- (void)populateVersions;

@end
