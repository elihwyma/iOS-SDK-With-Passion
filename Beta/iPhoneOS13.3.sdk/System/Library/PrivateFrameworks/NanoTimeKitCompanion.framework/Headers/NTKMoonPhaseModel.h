/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CLLocation, NSDate, NSString;

@interface NTKMoonPhaseModel : NSObject

{
    NSDate *_entryDate;
    NSDate *_eventDate;
    CLLocation *_location;
    NSString *_phaseName;
    unsigned long long _phaseNumber;
    long long _hemisphere;
    long long _event;
}

@property (nonatomic, readonly) NSDate *entryDate;
@property (nonatomic, readonly) NSDate *eventDate;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) NSString *phaseName;
@property (nonatomic, readonly) unsigned long long phaseNumber;
@property (nonatomic, readonly) long long hemisphere;
@property (nonatomic, readonly) long long event;

- (id)initWithDate:(id)arg1 location:(id)arg2;

@end
