/*
 Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

#import <Foundation/NSObject.h>

@class ASDPropertyAddress;

@interface ASDProperty : NSObject

{
    ASDPropertyAddress *_address;
    id _value;
}

@property (nonatomic, readonly) ASDPropertyAddress *address;
@property (retain, nonatomic) id value;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithAddress:(id)arg1 value:(id)arg2;

@end
