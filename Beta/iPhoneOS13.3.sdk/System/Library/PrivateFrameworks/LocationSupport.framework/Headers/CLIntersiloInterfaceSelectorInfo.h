/*
 Image: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
 */

#import <NSObject.h>

@class NSMethodSignature, NSString;

@interface CLIntersiloInterfaceSelectorInfo : NSObject

{
    int _replyBlockIndex;
    int _returnAddressIndex;
    SEL _sel;
    NSMethodSignature *_sig;
}

@property (nonatomic, readonly) SEL sel;
@property (nonatomic, readonly) int replyBlockIndex;
@property (nonatomic, readonly) int returnAddressIndex;
@property (retain, nonatomic, readonly) NSMethodSignature *sig;
@property (copy, nonatomic, readonly) NSString *typeStr;

- (id)description;
- (id)initWithSelector:(SEL)arg1 andMethodSignature:(id)arg2;

@end
