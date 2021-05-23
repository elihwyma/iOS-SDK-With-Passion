/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <NSObject.h>

@class NSDictionary, NSString, RBSProcessHandle;

@interface RBSHandshakeResponse : NSObject

{
    RBSProcessHandle *_handle;
    NSDictionary *_assertionIdentifiersByOldIdentifier;
    NSDictionary *_assertionErrorsByOldIdentifier;
}

@property (retain, nonatomic) RBSProcessHandle *handle;
@property (retain, nonatomic) NSDictionary *assertionIdentifiersByOldIdentifier;
@property (retain, nonatomic) NSDictionary *assertionErrorsByOldIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsBSXPCSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;

@end
