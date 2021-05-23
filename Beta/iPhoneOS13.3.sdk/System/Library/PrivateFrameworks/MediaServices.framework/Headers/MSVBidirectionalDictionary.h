/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSObject.h>

#import <MediaServices/Swift-Protocol.h>

@class NSMutableDictionary;

@interface MSVBidirectionalDictionary : NSObject <Swift>

{
    NSMutableDictionary *_keyToObjectDictionary;
    NSMutableDictionary *_objectToKeyDictionary;
}

+ (_Bool)supportsSecureCoding;
+ (id)bidirectionalDictionary;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)allKeys;
- (id)objectForKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyForObject:(id)arg1;

@end
