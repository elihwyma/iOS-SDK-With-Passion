/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INUserContextStore;

@interface INUserContext : NSObject <Swift>

{
    INUserContextStore *_store;
}

+ (long long)_type;
+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (void)becomeCurrent;
- (void)_setStore:(id)arg1;
- (void)_becomeCurrentNoHelper;

@end
