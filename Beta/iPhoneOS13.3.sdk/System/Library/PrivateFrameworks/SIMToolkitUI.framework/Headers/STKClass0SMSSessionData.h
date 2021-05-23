/*
 Image: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface STKClass0SMSSessionData : NSObject

{
    _Bool _showsFromAddress;
    NSString *_body;
    NSString *_address;
}

@property (copy, nonatomic, readonly) NSString *body;
@property (copy, nonatomic, readonly) NSString *address;
@property (nonatomic, readonly) _Bool showsFromAddress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithBody:(id)arg1 address:(id)arg2 showsFromAddress:(_Bool)arg3;

@end
