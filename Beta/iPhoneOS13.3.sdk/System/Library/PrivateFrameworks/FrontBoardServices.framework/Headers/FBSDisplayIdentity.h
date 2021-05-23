/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FBSDisplayIdentity : NSObject

{
    long long _type;
    unsigned int _displayID;
    unsigned int _connectionSeed;
    int _pid;
    _Bool _external;
    NSString *_uniqueIdentifier;
    _Bool _secure;
    FBSDisplayIdentity *_rootIdentity;
}

@property (nonatomic, readonly, getter=isSecure) _Bool secure;
@property (nonatomic, readonly) int pid;
@property (copy, nonatomic, readonly) FBSDisplayIdentity *rootIdentity;
@property (nonatomic, readonly) _Bool isRootIdentity;
@property (nonatomic, readonly, getter=isMainDisplay) _Bool mainDisplay;
@property (nonatomic, readonly, getter=isExternal) _Bool external;
@property (nonatomic, readonly, getter=isCarDisplay) _Bool carDisplay;
@property (nonatomic, readonly, getter=isCarInstrumentsDisplay) _Bool carInstrumentsDisplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)uniqueIdentifier;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (unsigned int)displayID;
- (_Bool)expectsSecureRendering;
- (id)_initWithType:(long long)arg1 displayID:(unsigned int)arg2 connectionSeed:(unsigned int)arg3 pid:(int)arg4 external:(_Bool)arg5 uniqueIdentifier:(id)arg6 secure:(_Bool)arg7 root:(id)arg8;
- (unsigned int)connectionSeed;
- (_Bool)isMainRootDisplay;
- (_Bool)isAirPlayDisplay;
- (_Bool)isRestrictedAirPlayDisplay;
- (_Bool)isiPodOnlyDisplay;
- (_Bool)isMusicOnlyDisplay;

@end
