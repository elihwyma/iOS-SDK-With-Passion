/*
 Image: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
 */

#import <NSObject.h>

@class NSString;

@interface CLSilo : NSObject

{
    NSString *_identifier;
}

@property (nonatomic, readonly) NSString *identifier;

+ (id)main;
+ (void)setGlobalConfiguration:(id)arg1;
+ (id)globalConfiguration;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)resume;
- (id)initWithIdentifier:(id)arg1;
- (void)suspend;
- (id)newTimer;
- (void)async:(CDUnknownBlockType)arg1;
- (void)assertInside;
- (void)assertOutside;
- (double)currentLatchedAbsoluteTimestamp;
- (void)sync:(CDUnknownBlockType)arg1;
- (void)afterInterval:(double)arg1 async:(CDUnknownBlockType)arg2;

@end
