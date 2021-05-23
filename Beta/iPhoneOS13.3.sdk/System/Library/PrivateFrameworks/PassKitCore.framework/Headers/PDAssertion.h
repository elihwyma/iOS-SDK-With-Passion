/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSString;

@interface PDAssertion : NSObject

{
    _Bool _invalidateWhenBackgrounded;
    unsigned long long _type;
    NSString *_identifier;
    NSString *_reason;
}

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *reason;
@property (nonatomic) _Bool invalidateWhenBackgrounded;

- (id)description;
- (id)initWithType:(unsigned long long)arg1 identifier:(id)arg2 reason:(id)arg3;

@end
