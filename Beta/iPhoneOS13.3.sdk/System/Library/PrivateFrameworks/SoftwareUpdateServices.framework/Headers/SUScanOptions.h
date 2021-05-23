/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSet, NSString;

@interface SUScanOptions : NSObject

{
    NSString *_identifier;
    _Bool _forced;
    NSMutableSet *_types;
    NSString *_requestedPMV;
    _Bool _MDMUseDelayPeriod;
}

@property (retain, nonatomic) NSSet *types;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic, getter=isForced) _Bool forced;
@property (retain, nonatomic) NSString *requestedPMV;
@property (nonatomic) _Bool MDMUseDelayPeriod;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)clearTypes;
- (void)addType:(int)arg1;
- (_Bool)containsType:(int)arg1;
- (void)removeType:(int)arg1;
- (_Bool)findsAnyUpdate;

@end
