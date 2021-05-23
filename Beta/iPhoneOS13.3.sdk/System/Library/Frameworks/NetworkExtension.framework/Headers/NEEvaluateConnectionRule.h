/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSArray, NSURL;

@interface NEEvaluateConnectionRule : NSObject

{
    long long _action;
    NSArray *_matchDomains;
    NSArray *_useDNSServers;
    NSURL *_probeURL;
}

@property (readonly) long long action;
@property (readonly) NSArray *matchDomains;
@property (copy) NSArray *useDNSServers;
@property (copy) NSURL *probeURL;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)copyLegacyDictionary;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithMatchDomains:(id)arg1 andAction:(long long)arg2;

@end
