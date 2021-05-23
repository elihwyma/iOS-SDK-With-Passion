/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

#import <MediaMiningKit/Swift-Protocol.h>

@class NSSet, NSString;

@interface CLSEKCalendar : NSObject <Swift>

{
    _Bool _hasSharees;
    NSSet *_shareesAndOwner;
    NSString *_calendarIdentifier;
}

@property (readonly) NSString *calendarIdentifier;
@property (readonly) _Bool hasSharees;
@property (readonly) NSSet *shareesAndOwner;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEKCalendar:(id)arg1;

@end
