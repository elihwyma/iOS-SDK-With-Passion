/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSError.h>

@class NSDictionary;

@interface NSError (WFLoggableObject)

@property (nonatomic, readonly) NSDictionary *propertiesForEventLogging;

+ (id)userCancelledError;
+ (id)wfUnsupportedUserInterfaceError;

- (_Bool)wf_isUserCancelledError;

@end
