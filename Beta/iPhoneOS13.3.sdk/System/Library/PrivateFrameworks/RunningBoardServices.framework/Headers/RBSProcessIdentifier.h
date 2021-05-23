/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <NSObject.h>

@class NSString;

@interface RBSProcessIdentifier : NSObject

{
    NSString *_description;
    int _pid;
}

@property (nonatomic, readonly) int pid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)identifierForCurrentProcess;
+ (_Bool)supportsBSXPCSecureCoding;
+ (id)identifierWithPid:(int)arg1;
+ (id)identifierForIdentifier:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)matchesProcess:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (int)rbs_pid;
- (id)processPredicate;
- (id)initWithPid:(int)arg1;

@end
