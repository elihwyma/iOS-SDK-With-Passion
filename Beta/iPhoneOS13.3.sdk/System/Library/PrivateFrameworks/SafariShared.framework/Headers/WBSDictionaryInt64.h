/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

#import <SafariShared/Swift-Protocol.h>

@interface WBSDictionaryInt64 : NSObject <Swift>

{
    unordered_map_fcbaed0a _map;
}

@property (nonatomic, readonly) const unordered_map_fcbaed0a *map;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (id)initWithMap:(const unordered_map_fcbaed0a *)arg1;
- (id)initWithMovableMap:(unordered_map_fcbaed0a *)arg1;

@end
