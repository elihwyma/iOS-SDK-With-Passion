/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSArray, NSUUID;

@interface CTXPCContexts : NSObject

{
    NSArray *_subscriptions;
    NSUUID *_dataPreferred;
    NSUUID *_voicePreferred;
}

@property (retain, nonatomic) NSArray *subscriptions;
@property (retain, nonatomic) NSUUID *dataPreferred;
@property (retain, nonatomic) NSUUID *voicePreferred;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)findForUuid:(id)arg1;
- (id)findForAccount:(id)arg1;
- (id)findForSlot:(long long)arg1;

@end
