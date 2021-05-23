/*
 Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface HSDAAPPropertyInfo : NSObject

{
    NSMutableDictionary *_codeMap;
    NSMutableDictionary *_valueTypeMap;
}

@property (retain, nonatomic) NSMutableDictionary *codeMap;
@property (retain, nonatomic) NSMutableDictionary *valueTypeMap;

+ (id)sharedContainerPropertyInfo;
+ (id)sharedItemPropertyInfo;

- (id)_init;
- (_Bool)hasInfoForProperty:(id)arg1;
- (void)mapProperty:(id)arg1 toCode:(unsigned int)arg2 valueType:(long long)arg3;
- (unsigned int)elementCodeForProperty:(id)arg1;
- (long long)valueTypeForProperty:(id)arg1;

@end
