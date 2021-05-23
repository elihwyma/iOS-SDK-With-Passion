/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

@class CXHandle, NSDictionary, NSString;

@interface CXHandoffContext : NSObject

{
    _Bool _outgoing;
    NSString *_handoffIdentifier;
    CXHandle *_remoteHandle;
    NSDictionary *_context;
}

@property (copy, nonatomic, readonly) NSString *handoffIdentifier;
@property (nonatomic, getter=isOutgoing) _Bool outgoing;
@property (copy, nonatomic) CXHandle *remoteHandle;
@property (copy, nonatomic) NSDictionary *context;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryRepresentation;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithHandoffIdentifier:(id)arg1;
- (_Bool)isEqualToHandoffContext:(id)arg1;

@end
