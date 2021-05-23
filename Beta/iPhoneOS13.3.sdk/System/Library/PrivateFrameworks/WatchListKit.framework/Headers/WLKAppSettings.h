/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WLKAppSettings : NSObject

{
    _Bool _obsolete;
    NSString *_channelID;
    NSString *_displayName;
    unsigned long long _accessStatus;
    NSString *_externalID;
}

@property (nonatomic, readonly) NSString *channelID;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) unsigned long long accessStatus;
@property (nonatomic, readonly) NSString *externalID;
@property (nonatomic) _Bool obsolete;

+ (_Bool)supportsSecureCoding;
+ (_Bool)isExternalID:(id)arg1 equalToExternalID:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)JSONDictionary;
- (id)initWithChannelID:(id)arg1 accessStatus:(unsigned long long)arg2 displayName:(id)arg3 externalID:(id)arg4;
- (_Bool)isEqualToAppSettings:(id)arg1;
- (id)_statusStrings;

@end
