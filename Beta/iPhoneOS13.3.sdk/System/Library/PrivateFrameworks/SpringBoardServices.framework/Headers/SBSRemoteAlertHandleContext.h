/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBSRemoteAlertHandleContext : NSObject

{
    _Bool _active;
    NSString *_handleID;
}

@property (copy, nonatomic, readonly) NSString *handleID;
@property (nonatomic, getter=isActive) _Bool active;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHandleID:(id)arg1;

@end
