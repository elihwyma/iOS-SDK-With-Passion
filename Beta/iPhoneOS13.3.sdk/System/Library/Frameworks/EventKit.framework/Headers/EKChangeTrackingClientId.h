/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class CADChangeTrackingClientId, NSString;

@interface EKChangeTrackingClientId : NSObject

{
    NSString *_suffix;
    NSString *_customClientId;
}

@property (copy, nonatomic, readonly) NSString *suffix;
@property (copy, nonatomic, readonly) NSString *customClientId;
@property (nonatomic, readonly) CADChangeTrackingClientId *CADChangeTrackingClientId;

- (id)init;
- (id)initWithSuffix:(id)arg1;
- (id)initWithCustomClientId:(id)arg1 suffix:(id)arg2;
- (id)initWithCustomClientId:(id)arg1;

@end
