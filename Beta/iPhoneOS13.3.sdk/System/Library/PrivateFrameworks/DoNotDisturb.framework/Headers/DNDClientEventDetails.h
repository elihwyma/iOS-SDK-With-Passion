/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

#import <NSObject.h>

@class DNDClientEventSource, NSString;

@interface DNDClientEventDetails : NSObject

{
    NSString *_identifier;
    DNDClientEventSource *_source;
    _Bool _shouldAlwaysInterrupt;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) DNDClientEventSource *source;
@property (nonatomic, readonly) _Bool shouldAlwaysInterrupt;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithDetails:(id)arg1;
- (id)_initWithIdentifier:(id)arg1 source:(id)arg2 shouldAlwaysInterrupt:(_Bool)arg3;

@end
