/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_os_log;

@interface SUCoreLog : NSObject

{
    NSObject<OS_os_log> *_oslog;
    NSString *_category;
}

@property (retain, nonatomic, readonly) NSObject<OS_os_log> *oslog;
@property (retain, nonatomic, readonly) NSString *category;

+ (id)sharedLogger;

- (id)initWithCategory:(id)arg1;

@end
