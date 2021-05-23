/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

#import <CameraUI/Swift-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface CAMCaptureCommand : NSObject <Swift>

{
    NSString *_reason;
    NSArray *_subcommands;
}

@property (copy, nonatomic) NSArray *subcommands;
@property (copy, nonatomic) NSString *reason;
@property (nonatomic, readonly) _Bool requiresSessionModification;
@property (copy, nonatomic, readonly) NSString *sessionModificationLogReason;
@property (nonatomic, readonly) NSDictionary *userInfo;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithSubcommands:(id)arg1;
- (void)addSubcommand:(id)arg1;
- (void)removeSubcommand:(id)arg1;

@end
