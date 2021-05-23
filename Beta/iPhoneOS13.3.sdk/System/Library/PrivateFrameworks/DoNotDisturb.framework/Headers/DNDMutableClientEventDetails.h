/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

#import <DoNotDisturb/DNDClientEventDetails.h>

@class DNDClientEventSource, NSString;

@interface DNDMutableClientEventDetails : DNDClientEventDetails

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) DNDClientEventSource *source;
@property (nonatomic) _Bool shouldAlwaysInterrupt;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
