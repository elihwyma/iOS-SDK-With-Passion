/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CNTestSmartFetcher : NSObject

{
    NSArray *_requiredKeys;
    NSArray *_optionalKeys;
}

@property (nonatomic, readonly) NSArray *requiredKeys;
@property (nonatomic, readonly) NSArray *optionalKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_cn_requiredKeys;
- (id)_cn_optionalKeys;
- (void)_cn_executeGetterForRepresentedKeys:(CDUnknownBlockType)arg1;
- (id)_cn_ignorableKeys;
- (id)initWithRequiredKeys:(id)arg1 optionalKeys:(id)arg2;

@end
