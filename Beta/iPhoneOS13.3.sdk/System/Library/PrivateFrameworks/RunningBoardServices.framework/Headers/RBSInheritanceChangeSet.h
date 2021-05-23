/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <NSObject.h>

@class NSSet, NSString;

@interface RBSInheritanceChangeSet : NSObject

{
    NSSet *_gainedInheritances;
    NSSet *_lostInheritances;
}

@property (copy, nonatomic, readonly) NSSet *gainedInheritances;
@property (copy, nonatomic, readonly) NSSet *lostInheritances;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsBSXPCSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithGainedInheritances:(id)arg1 lostInheritances:(id)arg2;

@end
