/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WBSUserMediaCapturePolicyEntry : NSObject

{
    double _permissionExpirationDate;
    double _permissionGrantDate;
    NSString *_origin;
    NSString *_topLevelOrigin;
    NSString *_persistentSalt;
    unsigned long long _permission;
    NSMutableDictionary *_ephemeralSalts;
}

@property (nonatomic) double permissionExpirationDate;
@property (nonatomic) double permissionGrantDate;
@property (retain, nonatomic) NSString *origin;
@property (retain, nonatomic) NSString *topLevelOrigin;
@property (retain, nonatomic) NSString *persistentSalt;
@property (nonatomic) unsigned long long permission;
@property (retain, nonatomic) NSMutableDictionary *ephemeralSalts;

- (_Bool)isValid;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (unsigned long long)_defaultUserMediaPermission;
- (void)updatePermission:(unsigned long long)arg1 expirationPolicy:(unsigned long long)arg2;
- (id)initWithPermission:(unsigned long long)arg1 expirationPolicy:(unsigned long long)arg2 forOrigin:(id)arg3 topLevelOrigin:(id)arg4;
- (_Bool)permissionExpiresWithinOneDay;
- (_Bool)_isValidUserMediaPermission:(unsigned long long)arg1;

@end
