/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString;

@interface UIDraggingSystemSessionInfo : NSObject <Swift>

{
    _Bool _supportsSystemDrag;
    unsigned int _sessionIdentifier;
    int _processIdentifier;
    NSString *_sceneIdentifier;
    CDStruct_4c969caf _auditToken;
}

@property (nonatomic) unsigned int sessionIdentifier;
@property (nonatomic) int processIdentifier;
@property (nonatomic) CDStruct_4c969caf auditToken;
@property (nonatomic) _Bool supportsSystemDrag;
@property (copy, nonatomic) NSString *sceneIdentifier;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
