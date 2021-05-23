/*
 Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NFKey : NSObject

{
    unsigned long long _address;
    NSString *_name;
    id _type;
}

@property (nonatomic, readonly) unsigned long long address;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) id type;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAddressOfType:(id)arg1 name:(id)arg2;
- (id)initWithTypeName:(id)arg1 name:(id)arg2;
- (id)initWithAddress:(unsigned long long)arg1 type:(id)arg2 name:(id)arg3;
- (id)copyWithName:(id)arg1;

@end
