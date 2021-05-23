/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIKBRTFingerInfo : NSObject <Swift>

{
    _Bool _unknownSeen;
    double _radius;
    double _lastSeenTimestamp;
    unsigned long long _identity;
    struct CGPoint _location;
}

@property (nonatomic) struct CGPoint location;
@property (nonatomic) double radius;
@property (nonatomic) double lastSeenTimestamp;
@property (nonatomic) unsigned long long identity;
@property (nonatomic) _Bool unknownSeen;
@property (nonatomic, readonly) double feedbackAlpha;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
