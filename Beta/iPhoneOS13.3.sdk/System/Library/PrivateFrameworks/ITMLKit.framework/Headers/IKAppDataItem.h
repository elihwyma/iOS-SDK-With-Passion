/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKAppPrototypeIdentifier, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface IKAppDataItem : NSObject

{
    NSString *_type;
    NSString *_identifier;
    IKAppPrototypeIdentifier *_prototypeIdentifier;
    NSDictionary *_dataDictionary;
}

@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) IKAppPrototypeIdentifier *prototypeIdentifier;
@property (copy, nonatomic, readonly) NSDictionary *dataDictionary;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(id)arg1 identifier:(id)arg2 prototypeIdentifier:(id)arg3 dataDictionary:(id)arg4;
- (id)valueForPropertyPath:(id)arg1;

@end
