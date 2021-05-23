/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class NSDictionary, NSSet, NSString;

@interface MPPropertySet : NSObject <Swift>

{
    NSSet *_properties;
    NSDictionary *_relationships;
}

@property (nonatomic, readonly) NSSet *properties;
@property (nonatomic, readonly) NSDictionary *relationships;
@property (nonatomic, readonly, getter=isEmpty) _Bool empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)emptyPropertySet;
+ (id)propertySetWithProperties:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_stateDumpObject;
- (id)initWithProperties:(id)arg1 relationships:(id)arg2;
- (_Bool)containsPropertySet:(id)arg1;
- (id)propertySetByCombiningWithPropertySet:(id)arg1;
- (id)propertySetByIntersectingWithPropertySet:(id)arg1;

@end
