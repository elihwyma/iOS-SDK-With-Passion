/*
 Image: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_os_log;

@interface _STKClass0SMSResponseProvider : NSObject

{
    NSObject<OS_os_log> *_logger;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSObject<OS_os_log> *logger;
@property (nonatomic, readonly) _Bool hasSentResponse;

- (void)sendResponse:(long long)arg1;
- (id)initWithLogger:(id)arg1;
- (void)sendResponse:(long long)arg1 withStringResult:(id)arg2;

@end
