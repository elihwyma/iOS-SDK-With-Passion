/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <NSObject.h>

@class NSString;

@interface RBSRequest : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsBSXPCSecureCoding;

- (id)init;
- (id)_init;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;

@end
