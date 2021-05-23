/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <NSObject.h>

@class NSSet, NSString;

@interface RBSHandshakeRequest : NSObject

{
    unsigned int _euid;
    NSSet *_assertionDescriptors;
}

@property (retain, nonatomic) NSSet *assertionDescriptors;
@property (nonatomic) unsigned int euid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsBSXPCSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;

@end
