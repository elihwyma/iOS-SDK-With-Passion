/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface AXIPCMessage : NSObject

{
    int _key;
    unsigned int _clientPort;
    NSDictionary *_payload;
    CDStruct_4c969caf _auditToken;
}

@property (nonatomic) int key;
@property (copy, nonatomic) NSDictionary *payload;
@property (nonatomic) unsigned int clientPort;
@property (nonatomic) CDStruct_4c969caf auditToken;
@property (copy, nonatomic, readonly) NSString *senderBundleId;

+ (_Bool)supportsSecureCoding;
+ (id)archivedMessageFromData:(id)arg1;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(int)arg1;
- (id)initWithKey:(int)arg1 payload:(id)arg2;
- (id)initWithKey:(int)arg1 payload:(id)arg2 keyDebugInfo:(id)arg3;

@end
