/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <Foundation/NSObject.h>

@class NSString, _RWIRelayClientConnection;

__attribute__((visibility("hidden")))
@interface _RWIDriverInterfaceInfo : NSObject

{
    _Bool _isActive;
    NSString *_identifier;
    NSString *_name;
    _RWIRelayClientConnection *_connection;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) _RWIRelayClientConnection *connection;
@property (nonatomic, readonly) _Bool isActive;

- (id)dictionaryRepresentation;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 connection:(id)arg3;
- (_Bool)updateDriverState:(_Bool)arg1;

@end
