/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSString;

@interface _NSCloudSharingDescriptor : NSObject <Swift>

{
    long long _operation;
    NSString *_sharedContentType;
    long long _numberOfInvitations;
    _Bool _invitationsSentViaThirdPartyService;
    _Bool _publicShare;
}

@property long long operation;
@property _Bool invitationsSentViaThirdPartyService;
@property _Bool publicShare;
@property long long numberOfInvitations;
@property (copy) NSString *sharedContentType;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_variantSubstrings;

@end
