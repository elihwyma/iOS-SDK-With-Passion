/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface CTSubscriberAuthDataHolder : NSObject

{
    NSDictionary *_dict;
}

@property (retain, nonatomic) NSDictionary *dict;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)data;

@end
