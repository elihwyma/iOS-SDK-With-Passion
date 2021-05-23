/*
 Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ATStatus : NSObject

{
    _Bool _wirelessSync;
    _Bool _automaticSync;
    unsigned int _syncStage;
    unsigned int _syncType;
    float _progress;
    NSString *_libraryID;
    NSString *_dataClass;
    NSString *_localizedDescription;
    unsigned long long _completedAssetCount;
    unsigned long long _totalAssetCount;
    unsigned long long _totalItemCount;
}

@property (copy, nonatomic) NSString *libraryID;
@property (copy, nonatomic) NSString *dataClass;
@property (nonatomic) unsigned int syncStage;
@property (nonatomic) unsigned int syncType;
@property (nonatomic) float progress;
@property (copy, nonatomic) NSString *localizedDescription;
@property (nonatomic) unsigned long long completedAssetCount;
@property (nonatomic) unsigned long long totalAssetCount;
@property (nonatomic) unsigned long long totalItemCount;
@property (nonatomic, getter=isWirelessSync) _Bool wirelessSync;
@property (nonatomic, getter=isAutomaticSync) _Bool automaticSync;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLibraryID:(id)arg1 dataClass:(id)arg2;

@end
