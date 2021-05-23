/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface TIProactiveTrigger : NSObject

{
    unsigned char _triggerSourceType;
    NSDictionary *_attributes;
}

@property (nonatomic, readonly) unsigned char triggerSourceType;
@property (nonatomic, readonly) NSDictionary *attributes;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSourceType:(unsigned char)arg1 attributes:(id)arg2;

@end
