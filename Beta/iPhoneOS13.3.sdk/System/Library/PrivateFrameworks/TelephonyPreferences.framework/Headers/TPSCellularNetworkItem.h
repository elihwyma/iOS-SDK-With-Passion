/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TPSCellularNetworkItem : NSObject

{
    NSString *_identifier;
    NSString *_name;
    NSString *_localizedName;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *localizedName;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 localizedName:(id)arg3;
- (_Bool)isEqualToCellularNetworkItem:(id)arg1;

@end
