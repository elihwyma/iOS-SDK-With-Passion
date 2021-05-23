/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class NSDictionary, NSMutableDictionary, NSSet, NSString, Protocol;

@interface TMLProtocolDescriptor : NSObject

{
    NSString *_protocolName;
    NSSet *_implementsProtocols;
    NSMutableDictionary *_signals;
    Protocol *_objcProtocol;
    NSString *_objcProtocolName;
}

@property (nonatomic, readonly) NSString *protocolName;
@property (nonatomic, readonly) NSDictionary *signals;
@property (nonatomic, readonly) Protocol *objcProtocol;
@property (copy, nonatomic) NSString *objcProtocolName;
@property (nonatomic, readonly) NSSet *implementsProtocols;

+ (id)decode:(const struct ProtobufCMessage *)arg1;

- (_Bool)isEqual:(id)arg1;
- (void)encode:(struct ProtobufCMessage *)arg1;
- (id)initWithName:(id)arg1 implementsProtocols:(id)arg2;
- (void)addSignal:(id)arg1;

@end
